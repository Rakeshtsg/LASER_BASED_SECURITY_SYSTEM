//Arduino
//Using a LASER|Arduino UNO
//Circuit.
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 

void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT); //Buzzer Pin
pinMode(7,INPUT); // Light Sensor
delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
int i=0;
if(digitalRead(7)==HIGH)
{
  a:
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
  delay(100);
  i++;
  if(i<50){
  goto a;
  }
  
  
  }

}
