class
	PLAYER

create
	make

feature {NONE} -- Initialization

	make (n: STRING)
			-- Create a player with name `n'.
		require
			name_exists: n /= Void and then not n.is_empty
		do
			name := n.twin
			money := 7
		ensure
			name_set: name ~ n
		end

feature -- Access

	name: STRING
			-- Player name.

	position: INTEGER
			-- Current position on the board.

	money: INTEGER
			-- Current money of the player.

feature -- Moving

	set_position (pos: INTEGER)
			-- Set position to `pos'.
		do
			position := pos
		ensure
			position_set: position = pos
		end

feature -- Basic operations

	play (d1, d2: DIE)
			-- Play a turn with dice `d1', `d2'.
		require
			dice_exist: d1 /= Void and d2 /= Void
		do
			d1.roll
			d2.roll
			set_position (position + d1.face_value + d2.face_value)
			print (name + " rolled " + d1.face_value.out + " and " + d2.face_value.out + ". Moves to " + position.out + ".%N")
			if
				position = 5 or position = 15 or position = 25 or position = 35
			then
				if money <= 5 then money := 0
				else money := money	- 5
				end
				print (name + " has lost 5 CHF.%N")
			end
			if
				position = 10 or position = 20 or position = 30 or position = 40
			then
				money := money + 10
				print (name + " has won 10 CHF.%N")
			end
		end

invariant
	name_exists: name /= Void and then not name.is_empty
end
