const int pushButton = 4;
int var = 0;

void setup(){
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
}

void loop(){

  while(var == 0){
  byte pushState = digitalRead(pushButton);
  digitalWrite(2, HIGH);
  delay(100);
    if(pushState == 1){
      digitalWrite(2, LOW);
      var = 1;
    }
  }

}
