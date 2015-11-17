note
	description: "N-queens puzzle."

class
	PUZZLE

feature -- Access

	size: INTEGER
			-- Size of the board.

	solutions: LIST [SOLUTION]
			-- All solutions found by the last call to `solve'.	

feature -- Basic operations

	solve (n: INTEGER)
			-- Solve the puzzle for `n' queens.
		require
			n_positive: n > 0
		local
			empty_solution: SOLUTION
		do
			size := n
			create {LINKED_LIST [SOLUTION]} solutions.make
			create empty_solution.make_empty
			complete(empty_solution)
		ensure
			solutions_exists: solutions /= Void
			complete_solutions: across solutions as s all s.item.row_count = n end
		end

feature {NONE} -- Implementation

	complete (partial: SOLUTION)
			-- Find all complete solutions that extend the partial solution `partial'
			-- and add them to `solutions'.
		require
			partial_exists: partial /= Void
		local
			i: INTEGER
		do
			if
				partial.row_count = size
			then
				solutions.extend (partial)
			end

			from
				i := 1
			until
				i > size
			loop
				if
					not under_attack (partial, i)
				then
					complete(partial.extended_with(i))
				end
				i := i + 1
			end
		end

	under_attack (partial: SOLUTION; c: INTEGER): BOOLEAN
			-- Is column `c' of the current row under attack
			-- by any queen already placed in partial solution `partial'?
		require
			partial_exists: partial /= Void
		local
			current_row, row: INTEGER
		do
			current_row := partial.row_count + 1
			from
				row := 1
			until
				Result or row > partial.row_count
			loop
				Result := attack_each_other (row, partial.column_at (row), current_row, c)
				row := row + 1
			end
		end

	attack_each_other (row1, col1, row2, col2: INTEGER): BOOLEAN
			-- Do queens in positions (`row1', `col1') and (`row2', `col2') attack each other?
		local
			temp: INTEGER
		do
			Result :=  row1 = row2
					or col1 = col2
					or (col1 - col2).abs = (row1 - row2).abs
		end

end
