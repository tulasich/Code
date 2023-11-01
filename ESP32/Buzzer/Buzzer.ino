const int buzzer = 12; //buzzer to pin 12


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 12 as an output

}

void loop(){
 
  tone(buzzer, 30); // Send 30 Hz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  
}
