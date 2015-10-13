note
	description : "Temperature application root class"

class
	APPLICATION

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			t_in_1: TEMPERATURE
			t_in_2: TEMPERATURE
		do
			-- Input temperature in Celsius and show the converted value in Kelvin.
			Io.put_string ("Input temperature in Celsius: %N")
			Io.read_integer_32
			create t_in_1.make_celsius (Io.last_integer_32)
			Io.put_string ("Temperature in Kelvin is: " + t_in_1.kelvin.out + "%N")

			-- Input temperature in Kelvin and show the converted value in Celsius.
			Io.put_string ("%NInput temperature in Kelvin: %N")
			Io.read_integer_32
			create t_in_2.make_kelvin (Io.last_integer_32)
			Io.put_string ("Temperature in Celsius is: " + t_in_2.celsius.out + "%N")

			-- Calculate the average temperature and show it in both Celsius and Kelvin.
			Io.put_string ("%NAverage temperature in Celsius is: " + t_in_1.average (t_in_2).celsius.out + "%N")
			Io.put_string ("Average temperature in Kelvin is: " + t_in_1.average (t_in_2).kelvin.out + "%N")
		end

end

