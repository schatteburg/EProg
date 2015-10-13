note
	description: "Temperature."

class
	TEMPERATURE

create
	make_celsius, make_kelvin

feature -- Initialization

	make_celsius (v: INTEGER)
			-- Create with Celsius value `v'.
		require
			temperature_not_too_low: v >= -273
		do
			-- Create a temperature object encapsulating value 'v' intended in Celsius.
			celsius := v
		ensure
			temperature_is_set: celsius = v
		end

	make_kelvin (v: INTEGER)
			-- Create with Kelvin value `v'.
		require
			temperature_not_too_low: v >= 0
		do
			-- Create a temperature object encapsulating value 'v' intended in Kelvin.
			celsius := (v - 273)
		ensure
			temperature_is_set: kelvin = v
		end

feature -- Access

	celsius: INTEGER
			-- Value in Celsius scale.

	kelvin: INTEGER
			-- Value in Kelvin scale.
		do
			-- Your code here
			Result := Current.celsius + 273
		end

feature -- Measurement

	average (other: TEMPERATURE): TEMPERATURE
			-- Average temperature between `Current' and `other'.
		require
			other_exists: other /= void
		local
			output_temperature: TEMPERATURE
		do
			-- Your code here.
			create output_temperature.make_celsius (((Current.celsius + other.celsius) / 2).truncated_to_integer)
			Result := output_temperature
		ensure
			result_is_between_temperatures: (Current.celsius <= Result.celsius and Result.celsius <= other.celsius) or (other.celsius <= Result.celsius and Result.celsius <= Current.celsius)
		end
invariant
	temperature_never_too_low: kelvin >= 0

end

