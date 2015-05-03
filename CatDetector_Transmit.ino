/*
  Example for different sending methods
  
  http://code.google.com/p/rc-switch/
  
  Project has been migrated to GitHub:
  https://github.com/sui77/rc-switch
  
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  // Use during debugging, if needed
  //Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #4
  mySwitch.enableTransmit(4);

  // --------------------------------------------
  // Following code is kept from the demo sketch - not used in this application though
  
  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
  // Optional set protocol (default is 1, will work for most outlets)
  // mySwitch.setProtocol(2);
  
  // Optional set number of transmission repetitions.
  // mySwitch.setRepeatTransmit(15);

  // End demo code
  // --------------------------------------------
  
}

void loop() {
// --------------------------------------------
// Start demo code 

//  /* See Example: TypeA_WithDIPSwitches */
//  mySwitch.switchOn("11111", "00010");
//  delay(1000);
//  mySwitch.switchOn("11111", "00010");
//  delay(1000);
//
//  /* Same switch as above, but using decimal code */
//  mySwitch.send(5393, 24);
//  delay(1000);  
//  mySwitch.send(5396, 24);
//  delay(1000);  
//
//  /* Same switch as above, but using binary code */
//  mySwitch.send("000000000001010100010001");
//  delay(1000);  
//  mySwitch.send("000000000001010100010100");
//  delay(1000);

// End demo code
// --------------------------------------------


  /* Same switch as above, but tri-state code */ 
  Serial.println("Sending...");
  mySwitch.sendTriState("F0F0FF00000F");
  delay(1000);  

// Test patterns
//  mySwitch.sendTriState("00000FFF0F0F");
//  delay(1000);  
//  mySwitch.sendTriState("00000FFF0FF0");
//  delay(1000);
///  delay(10000);
}
