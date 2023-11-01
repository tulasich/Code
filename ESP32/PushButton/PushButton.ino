const int pushButton = 4;
void setup(){
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(pushButton, INPUT);
}
void loop(){
  delay(10);
  byte buttonState = digitalRead(pushButton);
  if(buttonState == HIGH){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }
}
