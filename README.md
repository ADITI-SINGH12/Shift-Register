# Shift-Register
Configuration 
The shift register holds 8 bit memory location, each of which can be 0, 1.
To set each of thse values on or off, we feed in the data using the'Data' and 'Clock' pins of the chip.
The clock pin needs 8 receive pulses.At the time of each pulse, if the data pin is high, then a 1 gets pushsed into shift register.Otherwise, it is a 0. When all 8 pulses have been
recieved then enabling the 'Latch' pin copies those eight values to latch register.

The chip also has an OE(output enable) pin, this is used to enable or disable the output all at once.I could attach this to a PWM capable Arduino pin and use analogWrite() to control the
brightness of the LED's. This pin is active low so we tie it to ground.
