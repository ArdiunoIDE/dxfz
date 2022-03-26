int led =8;
void setup() {
  
  Serial.begin(9600);
   
   pinMode(led,OUTPUT);
}
void loop() {
   
    digitalWrite(led,HIGH);
 
 Serial.println("LED ON");

delay(2000); 
 
 digitalWrite (led,LOW);

Serial.println("LED OFF");
   delay(3000);
}
  
