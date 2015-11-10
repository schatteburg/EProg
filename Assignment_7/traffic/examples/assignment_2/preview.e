note
	description: "Introduction to Traffic."

class
	PREVIEW

inherit

	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Adds station "Zoo" and makes it blink for 120 seconds.
		local
			i: INTEGER
		do
			Zurich.add_station ("Zoo", 1800, -500)
			Zurich.connect_station (6, "Zoo")
			Zurich_map.update
			Zurich_map.fit_to_window
			wait (1)
			from
				i := 0
			until
				i > 59
			loop
				Zurich_map.station_view (Zurich.station ("Zoo")).highlight
				wait (1)
				Zurich_map.station_view (Zurich.station ("Zoo")).unhighlight
				wait (1)
			end
		end

end
