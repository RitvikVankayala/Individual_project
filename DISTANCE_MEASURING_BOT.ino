#include <NewPing.h>
#include <Arduino.h>
#include <TM1637Display.h>

#define TRIG 12  
#define ECHO 11  
#define MAX_DISTANCE 200 
#define CLK 2
#define DIO 3

NewPing CALCULATE_DISTANCE(TRIG,ECHO,MAX_DISTANCE);

TM1637Display display(CLK, DIO);

void setup() {
  Serial.begin(115200);
}

void loop() {
  display.setBrightness(0x0f);
  uint8_t digits[] = { 0x0, 0x0, 0x0, 0x0 };
  display.setSegments(digits);
  int separation = CALCULATE_DISTANCE.ping_cm();// get the distance and store it in "distance" variable
                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(CALCULATE_DISTANCE.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  display.showNumberDec(separation, false, 3,1);
  delay(50);  
}
