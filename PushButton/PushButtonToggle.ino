const int pushButton = 4;
byte ledState = 0;
byte buttonNew;
byte buttonOld = 0;

void setup(){
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(pushButton, INPUT);
}
void loop(){
  delay(10);
  byte buttonNew = digitalRead(pushButton);
  if(buttonOld == 0 && buttonNew == 1){
    if(ledState == 0){
      digitalWrite(2, HIGH);
      ledState = 1;
    }
    else{
      digitalWrite(2, LOW);
      ledState = 0;
    }
  }
  buttonOld = buttonNew;
  delay(1000); 
}
