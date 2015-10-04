class
	BUSINESS_CARD

create
	fill_in

feature {NONE} -- Initialization

	fill_in
			-- Fill in the card and print it.
		do
				-- name
			Io.put_string ("Your name: ")
			Io.read_line
			set_name (Io.last_string)

				-- job
			Io.put_string ("Your job: ")
			Io.read_line
			set_job (Io.last_string)

				-- age
			Io.put_string ("Your age: ")
			Io.read_integer
			set_age (Io.last_integer)
			print_card
		end

feature -- Access

	name: STRING
			-- Owner's name.

	job: STRING
			-- Owner's job.

	age: INTEGER
			-- Owner's age.

feature -- Setting

	set_name (a_name: STRING)
			-- Set `name' to `a_name'.
		require
			name_exists: a_name /= Void
		do
			name := a_name.twin
		end

	set_job (a_job: STRING)
			-- Set `job' to `a_job'.
		require
			job_exists: a_job /= Void
		do
			job := a_job.twin
		end

	set_age (a_age: INTEGER)
			-- Set `age' to `a_age'.
		require
			age_non_negative: a_age >= 0
		do
			age := a_age
		end

feature -- Output

	name_info: STRING
			-- Text representation of name on the card.
		do
			Result := name.out
		end

	job_info: STRING
			-- Text representation of job on the card.
		do
			Result := job.out
		end

	age_info: STRING
			-- Text representation of age on the card.
		do
			Result := age.out + " years old"
		end

	print_card
			-- console output of the business card.
		require
			name_short_enough: name_info.count <= Width - 2
			job_short_enough: job_info.count <= Width - 2
			age_short_enough: age_info.count <= Width - 2
		do
			Io.put_string (line (Width) + "%N")
			Io.put_string ("|" + name_info + spaces (Width - 2 - name_info.count) + "|" + "%N")
			Io.put_string ("|" + job_info + spaces (Width - 2 - job_info.count) + "|" + "%N")
			Io.put_string ("|" + age_info + spaces (Width - 2 - age_info.count) + "|" + "%N")
			Io.put_string (line (Width) + "%N")
		end

	Width: INTEGER = 50
			-- Width of the card (in characters).

	line (n: INTEGER): STRING
			-- Horizontal line on length `n'.
		do
			Result := "-"
			Result.multiply (n)
		end

	spaces (n:INTEGER): STRING
			-- `n' spaces
		do
			Result := " "
			Result.multiply (n)
		end

end
