note
	description: "Route information displays."

class
	DISPLAY

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	add_public_transport
			-- Add a public transportation unit per line.
		do
				across
					Zurich.lines as i
				loop
					i.item.add_transport
				end
		end

	update_transport_display (t: PUBLIC_TRANSPORT)
			-- Update route information display inside transportation unit `t'.
		require
			t_exists: t /= Void
		local
			s: STATION
			current_next_station: STATION
		do
			current_next_station := t.arriving
				from
					s := t.arriving
				until
					s = t.destination or else s = Zurich.line (t.line.number).next_station (Zurich.line (t.line.number).next_station (Zurich.line (t.line.number).next_station (current_next_station, t.destination), t.destination), t.destination)
				loop
					-- somehow the console doesn't work
					console.output (t.time_to_station (s).out + s.name + "%N")
					Io.put_string (t.time_to_station (s).out + s.name + "%N")
					s := Zurich.line (t.line.number).next_station (s, t.destination)
				end
				if
					s /= t.destination
				then
					Io.put_string (t.time_to_station (t.destination).out + s.name + "%N")
				end
		end

end
