class
	APPLICATION

create
	make

feature

	make
			-- Launch the application.
		local
			count : INTEGER
			game: GAME
			i: INTEGER
		do
			from
				count := {GAME}.Min_player_count - 1
			until
				{GAME}.Min_player_count <= count and count <= {GAME}.Max_player_count
			loop
				print ("Enter number of players between " + {GAME}.Min_player_count.out + " and " + {GAME}.Max_player_count.out + ": ")
				io.read_integer
				count := io.last_integer
			end

			create game.make (count)
			game.play
			if
				game.winners [2] = Void
			then
				print ("%NAnd the winner is: " + game.winners [1].name + "%N")
			else
				print ("%NAnd the winners are: ")
				from
					i := 1
				until
					game.winners [1] = Void
				loop
					print (game.winners [i].name + " ")
				end
			end
			print ("The players ended with the following money:%N")
			from
				i := 1
			until
				i > game.players.count
			loop
				print (game.players [i].name + ": " + game. players [i].money.out + " CHF%N")
				i := i + 1
			end
			print ("%N*** Game Over ***")
		end
end
