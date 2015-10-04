note
	description: "Introduction to Traffic."

class
	PREVIEW

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Modify the map.
		do
			-- Io.put_boolean (Zurich.line (24).west_terminal.is_exchange)
			--	console.output (Zurich.station ("Central").position.distance (Zurich.station ("Polyterrasse").position))

			-- 3.1
			Io.putdouble (Zurich.line(13).color.brightness)
			Io.put_new_line

			-- 3.2
			-- does not work and I know why: console.output (Zurich.line(31).i_th(3).position.difference(make((Zurich.east - Zurich.west) / 2,(Zurich.north - Zurich.south) / 2)).y)

			-- 3.3
			Io.put_string (Zurich.line(31).next_station(Zurich.station("Loewenplatz"),Zurich.line(31).west_terminal).name)
			Io.put_new_line

			-- 3.4
			Io.put_integer(Zurich.station ("Paradeplatz").lines.count)
			Io.put_new_line

			-- 3.5
			Io.put_boolean(Zurich.connecting_lines (Zurich.station ("Paradeplatz"), Zurich.station ("Rennweg")).has_index (7))
			Io.put_new_line
		end

end
