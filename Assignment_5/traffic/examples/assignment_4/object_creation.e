note
	description: "Creating new objects for Zurich."

class
	OBJECT_CREATION

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Create new objects for Zurich.
		do
			add_buildings
			add_route
		end

feature -- object creation

	add_buildings
			-- creates the buildings ETH Hauptgebäude and Opernhaus and adds them to Zurich

		local
			eth_main_a: VECTOR
			eth_main_b:	VECTOR
			opera_a: VECTOR
			opera_b: VECTOR

			eth_main: BUILDING
			opera: BUILDING

		do
			-- I don't know the exact positions, but they appear on the map
			create eth_main_a.make (60, 0)
			create eth_main_b.make (200, 600)
			create opera_a.make (-120, 50)
			create opera_b.make (-230, 165)

			create eth_main.make ("Rämistrasse 101", eth_main_a, eth_main_b)
			eth_main.set_name ("ETH Hauptgebäude")
			create opera.make ("Opernhausstrasse 1", opera_a, opera_b)
			opera.set_name ("Opernhaus")

			Zurich.add_building (eth_main)
			Zurich.add_building (opera)
		end

	add_route
			-- creates route from ETH/Universitaetsspital to Opernhaus via Paradeplatz and adds it to Zurich

		local
			leg_1: LEG
			leg_2: LEG
			route_friend: ROUTE
		do
			create leg_1.make (Zurich.station ("ETH/Universitaetsspital"), Zurich.station ("Paradeplatz"), Zurich.line (6))
			create leg_2.make (Zurich.station ("Paradeplatz"), Zurich.station ("Opernhaus"), Zurich.line (2))

			leg_1.link (leg_2)

			create route_friend.make (leg_1)
			Zurich.add_route (route_friend)
		end
end
