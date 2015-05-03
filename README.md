# CatDetector_Transmit
Creates a signal that will trigger the receiving unit of a wireless cat detector

The "cat doorbell" (link below) is a product available for purchase at various online stores.
It consists of a motion detector (PIR) transmit outdoor unit, and a receiving indoor unit. 
When the cat triggers the outdoor PIR a signal is sent to the indoor unit, which blinks in various colors, and/or
plays one of various sounds.

But what about when you have several doors that you want to monitor? At least our cat tends to arrive at either of
our different doors - it would be nice to have an additional outdoor transmit unit.

This is pretty easy to set up. Get a cheap wireless 433.92 MHz PIR unit from Ebay or second hand wireless PIR
from some alarm system. Hook up a small Arduino board (probably works with a basic ATTINY85 too) to the PIR's output,
then load the Arduino with the code in this repo, and hook suitable pin from the Arduino (for example pin 4, this
will avoidcollision with the serial port on pin 0 and 1) to the 433.92 MHz transmitter. 

The Arduino board can probably run off the same battery as the PIR unit itself, if you choose an Arduni Nano or 
similar, there is a good chance that board will fit inside the PIR unit too.




http://www.innovadvance.se/English.htm

