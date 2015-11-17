note
	description: "Short trips."

class
	SHORT_TRIPS

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	highlight_short_distance (s: STATION)
			-- Highlight stations reachable from `s' within 2 minutes.
		require
			station_exists: s /= Void
		do
			highlight_reachable (s, 120)
		end

feature {NONE} -- Implementation

	highlight_reachable (s: STATION; t: REAL_64)
			-- Highight stations reachable from `s' within `t' seconds.
		require
			station_exists: s /= Void
		local
			time_to_next: REAL_64
			time_to_previous: REAL_64
		do
			across
				s.lines as line
			loop
				time_to_next := line.item.time (s, line.item.next_station (s, line.item.last))
				time_to_previous := line.item.time (s, line.item.next_station (s, line.item.first))

				if
					time_to_next <= t
				then
					Zurich_map.station_view (line.item.next_station (s, line.item.last)).highlight
					highlight_reachable (line.item.next_station (s, line.item.last), t - time_to_next)
				end

				if
					time_to_previous <= t
				then
					Zurich_map.station_view (line.item.next_station (s, line.item.first)).highlight
					highlight_reachable (line.item.next_station (s, line.item.first), t - time_to_previous)
				end
			end
		end

end
