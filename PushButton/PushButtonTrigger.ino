void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(4,INPUT);   // push button
pinMode(5,INPUT);   //pin 5 is not connected to anything hence is in state of 1 - external trigger
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int a=digitalRead(4);
  int b=digitalRead(5);
  Serial.print("switch value is: ");
  Serial.println(a);
  Serial.print("sensor value is: ");
  Serial.println(b);
 
  if(b==0){
    digitalWrite(2,HIGH);
    delay(100);
  }
 
 if(a==1){
   digitalWrite(2,LOW);
   delay(100);
 }

}
