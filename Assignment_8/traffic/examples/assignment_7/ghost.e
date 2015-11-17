note
	description: "Summary description for {GHOST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GHOST

inherit
	MOBILE
		redefine
			position,
			speed,
			move_distance
		end

create
	make_at_station

feature {NONE} -- Initialization

	 make_at_station (a_station: STATION, a_distance_from_station: REAL_64)
			-- Initialization for `Current'.
		require
			a_station /= Void
			a_distance_from_station /= 0
		do
			station := a_station
			create relative_to_station.make_polar (a_distance_from_station, 0)
			speed := a_speed
		end

feature	-- Access

	station: STATION
	relative_to_station: VECTOR

	position: VECTOR
		do
			Result := station.position + relative_to_station
		end

	speed: REAL_64

feature	-- Movement

	move_distance (d: REAL_64)
			-- Moves ghost `d' meters.
		do
			relative_to_station := relative_to_station.rotated (d / relative_to_station.length)
		end

end
