//Turning off a blinking LED and a buzzer with push button
const int pushButton = 4;
const int buzzer = 12;
int var = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pushButton, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.println("Hello, ESP32!");
}

void loop() {

  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
  while(var == 0){
    byte pushState = digitalRead(pushButton);
    digitalWrite(2, HIGH);
    delay(100);
    tone(buzzer, 30);
  
    if(pushState == 1){
      digitalWrite(2, LOW);
      delay((10));
      noTone(buzzer);
      var = 1;
    }
  }

}
