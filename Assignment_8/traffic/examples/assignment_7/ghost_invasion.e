note
	description: "Adding ghosts to Zurich."

class
	GHOST_INVASION

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	invade
			-- Add ghosts to random stations.
		do
			-- Add your code here.
		end

	ghost: GHOST
	add_ghost (a_station: STATION; a_radius: REAL_64)
			-- Add a ghost going around `a_station'.
		require
			a_station_exists: a_station /= Void
			a_radius_positive: a_radius > 0.0
		do
			create ghost.make_at_station (a_station, a_radius)
			Zurich.add_custom_mobile (ghost)
			Zurich_map.update_mobile
		end

end
