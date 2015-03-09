#include <eHealth.h>

// The setup routine runs once when you press reset:
void setup() {
  Serial.begin(115200);  
}
const int analogOutPin=10;
// The loop routine runs over and over again forever:
void loop() {

  //analogWrite(analogOutPin,150);
  //delay (2000);
  analogWrite(analogOutPin,255);
 // delay(2000);
}
