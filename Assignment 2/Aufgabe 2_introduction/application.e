class
	APPLICATION

create
	execute

feature {NONE} -- Initialization

	execute
			-- Introduces Tom Schatteburg.
			local
				name: STRING_8
				age: INTEGER
				mother_tongue: STRING_8
				cat: BOOLEAN
		do
			name := "Tom Schatteburg"
			age := 20
			mother_tongue := "German"
			cat := FALSE

			Io.put_string ("Name: ")
			Io.put_string (name)
			Io.new_line
			Io.put_string ("Age: ")
			Io.put_integer (age)
			Io.new_line
			Io.put_string ("Mother tongue: ")
			Io.put_string (mother_tongue)
			Io.new_line
			Io.put_string ("Has a cat: ")
			Io.put_boolean (cat)
			Io.new_line
		end

end
