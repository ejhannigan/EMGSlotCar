#include <eHealth.h>

// The setup routine runs once when you press reset:
void setup() {
  Serial.begin(115200);  
}

// The loop routine runs over and over again forever:
void loop() {

  int EMG = eHealth.getEMG();

  Serial.print("EMG value :  ");
  Serial.print(EMG);  
  Serial.println(""); 

  delay(400);	// wait for a millisecond
  
  //int value = EMG;
  
  //analogWrite(3, value);
}
