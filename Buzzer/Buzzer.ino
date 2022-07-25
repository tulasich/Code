int buzzer = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
  tone(buzzer, 30);
  noTone(buzzer); // turn off buzzer
  //tone(buzzer, 100, 1000); pin number, frequency, time/tempo
  //delay(2000); - buzzer has in built timer
}
