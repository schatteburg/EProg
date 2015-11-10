class
	GAME

create
	make

feature {NONE} -- Initialization

	make (n: INTEGER)
			-- Create a game with `n' players.
		require
			n_in_bounds: Min_player_count <= n and n <= Max_player_count
		local
			i: INTEGER
			p: PLAYER
		do
			create die_1.roll
			create die_2.roll
			create players.make (1, n)
			create winners.make (1, n)
			from
				i := 1
			until
				i > players.count
			loop
				create p.make ("Player" + i.out)
				p.set_position (1)
				players [i] := p
				print (p.name + " joined the game.%N")
				i := i + 1
			end
			print ("%N")
		end

feature -- Basic operations

	play
			-- Start a game.
		local
			round, i, j, k, l, max_money: INTEGER
		do
			from
				round := 1
				print ("The game begins.%N")
				print_board
			until
				winners [1] /= Void
			loop
				print ("%NRound #" + round.out + "%N%N")
				from
					i := 1
				until
					winners [1] /= Void or else i > players.count
				loop
					players [i].play (die_1, die_2)
					if players [i].position > Square_count then
							-- determination of the winner/winners.
						from
							j := 1
						until
							j > players.count
						loop
							if
								players [j].money > max_money
							then
								max_money := players [j].money
								winners [1] := players [j]
									-- clear other multiple winners.
								from
									k := 2
								until
									k > players.count
								loop
									winners [k] := Void
									k := k + 1
								end
							elseif
								players [j].money = max_money
							then
									-- append to winners list.
								from
									l := 2
								until
									l > players.count or winners [l - 1] = players [l]
								loop
									if winners [l] = Void
									then
										winners [l] := players [l]
									end
									l := l + 1
								end
							end
							j := j + 1
						end
					end
					i := i + 1
				end
				print_board
				round := round + 1
			end
		ensure
			has_winner: winners [1] /= Void
		end

feature -- Constants

	Min_player_count: INTEGER = 2
			-- Minimum number of players.

	Max_player_count: INTEGER = 6
			-- Maximum number of players.

	Square_count: INTEGER = 40
			-- Number of squares.

feature -- Access

	players: V_ARRAY [PLAYER]
			-- Container for players.

	die_1: DIE
			-- The first die.

	die_2: DIE
			-- The second die.

	winners: V_ARRAY [PLAYER]
			-- The winner/winners (Void if the game if not over yet).

feature {NONE} -- Implementation

	print_board
			-- Output players positions on the board.
		local
			i, j: INTEGER
			board: STRING
		do
			io.new_line
			board := "."
			board.multiply (Square_count)
			print (board)
			io.new_line
			from
				i := 1
			until
				i > players.count
			loop
				from
					j := 1
				until
					j >= players [i].position
				loop
					print (" ")
					j := j + 1
				end
				print (i)
				io.new_line
				i := i + 1
			end
		end

invariant
	dice_exist: die_1 /= Void and die_2 /= Void
	players_exist: players /= Void
	number_of_players_consistent: Min_player_count <= players.count and players.count <= Max_player_count
end
