
//VCC CIRCUTE--connect possitve pin of the led to pin number 8.  

//GND CIRCUTE-- connect NEGETIVE pin of the led to pin number GND

int led =8;
void setup() {
  
  Serial.begin(9600);
   
   pinMode(led,OUTPUT);
}
void loop() {
   
    digitalWrite(led,HIGH);
 
 Serial.println("HELLO LED ON");

delay(2000); 
 
 digitalWrite (led,LOW);

Serial.println("BYE BYE LED OFF");
   delay(3000);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//We only needed to print the char write. so we can easly change the code like this. Serial.println("HELLO LED ON")// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
