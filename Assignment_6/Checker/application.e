note
	description : "Checker application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			dimension: INTEGER
		do
			--| Asks for user input and prints checker triangle and checker diamond accordingly.

			dimension := ask_for_and_check_input
			triangle (dimension)
			diamond (dimension)
		end

feature		-- Implementation

	ask_for_and_check_input: INTEGER
			--asks user to input a positive integer <= 20 and returns it if valid
		do
			from
				Io.put_string ("Enter a positive integer <= 20: ")
				Io.read_integer_32
				Result := Io.last_integer_32
			until
				0 < Result and Result <= 20
			loop
				Io.put_string ("Input was not valid. Please input a positive integer <= 20: ")
				Io.read_integer_32
				Result := Io.last_integer_32
			end

			ensure
				Input_larger_than_zero: 0 < Result
				Input_smaller_or_equal_than_twenty: Result <= 20
		end

	triangle (a_dimension: INTEGER)
			-- prints a triangle with `a_dimension' as length of the hypothenuse
		local
			line: INTEGER
			character: INTEGER
		do
			Io.put_string ("Checker triangle:%N%N")
			from
				line := 1
			until
				line = a_dimension + 1
			loop
				-- write line
				from
					character := line
				until
					character = line + line
				loop
					if
						character.integer_remainder (2) = 0
					then
						Io.put_character (' ')
					else
						Io.put_character ('*')
					end
					character := character + 1
				end
				Io.put_character ('%N')
				line := line + 1
			end
			Io.put_character ('%N')
		end

	diamond (a_dimension: INTEGER)
			-- prints a diamond with `a_dimension' as sidelength
		local
			line: INTEGER
			character: INTEGER
			space: INTEGER
		do
			Io.put_string ("Checker diamond:%N%N")

				-- write upper half
			from
				line := 1
			until
				line = a_dimension + 1
			loop
				-- write line

					-- write spaces before characters
				from
					space := a_dimension
				until
					space = line
				loop
					Io.put_character (' ')
					space := space - 1
				end

					-- write characters
				from
					character := 1
				until
					character = 2 * line
				loop
					if
						character.integer_remainder (2) = 0
					then
						Io.put_character (' ')
					else
						Io.put_character ('*')
					end
					character := character + 1
				end
				Io.put_character ('%N')
				line := line + 1
			end


				-- write lower half
			from
				line := a_dimension - 1
			until
				line = 0
			loop
				-- write line

					-- write spaces before characters
				from
					space := a_dimension
				until
					space = line
				loop
					Io.put_character (' ')
					space := space - 1
				end

					-- write characters
				from
					character := 1
				until
					character = 2 * line
				loop
					if
						character.integer_remainder (2) = 0
					then
						Io.put_character (' ')
					else
						Io.put_character ('*')
					end
					character := character + 1
				end
				Io.put_character ('%N')
				line := line - 1
			end

			Io.put_character ('%N')

		end

end
