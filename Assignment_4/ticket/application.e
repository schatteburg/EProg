note
	description : "ZVV information system."

class
	APPLICATION

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		do
			read_data
			if not read_error then
				Io.new_line
				print ("Eligible for discount: ")
				print (gets_discount)
			end
		end

feature -- Access

	birth_date: DATE
			-- Birth date.

	home: STRING
			-- Home postal code.

	work: STRING
			-- Work postal code.

	age: INTEGER
			-- Age (difference in years between today's date and `birth_date').
		require
			birth_date_exists: birth_date /= Void
		local
			date_now: DATE
		do
			create date_now.make_now
			Result := date_now.relative_duration (birth_date).year
		end

feature -- Status report

	is_valid_postal_code (pc: STRING): BOOLEAN
			-- Is `pc' a valid postal code in Switzerland?
		do
			Result := pc.count = 4 and then pc.is_natural
		end

	is_in_zurich_canton (pc: STRING): BOOLEAN
			-- Is postal code `pc' inside the canton of Zurich?
		require
			valid_code: is_valid_postal_code (pc)
		do
			Result := pc [1] = '8'
		end

	is_in_zurich_city (pc: STRING): BOOLEAN
			-- Is postal code `pc' inside the city of Zurich?
		require
			valid_code: is_valid_postal_code (pc)
		do
			Result := pc [1] = '8' and then pc [2] = '0'
		end

	gets_discount: BOOLEAN
			-- Is a customer with the current `birth_date', `home' and `work' eligible for a discounted seasonal ticket?
		require
			birth_date_exists: birth_date /= Void
			valid_home_code: is_valid_postal_code (home)
			valid_work_code: is_valid_postal_code (work)
		local
			younger_than_25: BOOLEAN
			live_inside_work_outside: BOOLEAN
			live_outside_work_inside: BOOLEAN
		do
			younger_than_25 := age <= 25
			live_inside_work_outside := is_in_zurich_city (home) and is_in_zurich_canton (work)
			live_outside_work_inside := is_in_zurich_canton (home) and is_in_zurich_city (work)

			Result := younger_than_25 or else live_inside_work_outside or else live_outside_work_inside
		end

feature {NONE} -- Implementation

	read_error: BOOLEAN
			-- Did an error occur while reading user data?

	read_data
			-- Read user input.
		local
			date_format: STRING
		do
			date_format := "[0]dd/[0]mm/yyyy"
			print ("Enter birth date as dd/mm/yyyy: ")
			Io.read_line
			if not (create {DATE_VALIDITY_CHECKER}).date_valid (Io.last_string, date_format) then
				print ("Invalid date")
				read_error := True
			else
				create birth_date.make_from_string (Io.last_string, date_format)
			end

			if not read_error then
				print ("Enter home postal code: ")
				Io.read_line
				home := Io.last_string.twin
				if not is_valid_postal_code (home)  then
					print ("Invalid postal code")
					read_error := True
				end
			end

			if not read_error then
				print ("Enter work postal code: ")
				Io.read_line
				work := Io.last_string.twin
				if not is_valid_postal_code (work)  then
					print ("Invalid postal code")
					read_error := True
				end
			end
		end
end
