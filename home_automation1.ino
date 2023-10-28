#include <Servo.h>

int output1=0;
int sen1value=0;
int sen2value=0;
int const gas_sensor=A1;
int const LDR=A0;
int limit=150;

long readultrasonicdistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin,OUTPUT);
  digitalWrite(triggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);
  pinMode(echoPin,INPUT);
  return pulseIn(echoPin,HIGH);
}

Servo servo_7;

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(9,OUTPUT);
  
  servo_7.attach(7,500,2500);
  
  pinMode(8,OUTPUT);
  pinMode(13,INPUT);
  pinMode(10,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  //....light intensity control...//
  int val1=analogRead(LDR);
  if(val1>500)
  {
    digitalWrite(9,LOW);
    Serial.println("Bulb ON ");
    Serial.println(val1);
  }
  else
  {
    digitalWrite(9,LOW);
    Serial.println("Bulb OFF ");
    Serial.println(val1);
  }
  
  
  //.....Light and Fan Control....//
  sen2value=digitalRead(13);
  if(sen2value==0)
  {
    digitalWrite(10,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    Serial.print("NO MOTION DETECTED");
  }
   if(sen2value==1)
  {
    digitalWrite(10,HIGH);
    delay(5000);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    Serial.print("MOTION DETECTED");
  }
  
  
  //......GAS SENSOR...//
  int val=analogRead(gas_sensor);
  Serial.print("Gas Sensor value");
  Serial.print(val);
  // val=map(val,300,750,0,1000);
  if(val>limit)
  {
    tone(8,650);
  }
  delay(300);
  noTone(8);
  
  //.....Servo Motor.....//
  sen2value=0.01723*readultrasonicdistance(6,6);
  
  if(sen2value<100)
  {
    servo_7.write(90);
    Serial.print("Door open!!; Distance+");
    Serial.print(sen2value);
    Serial.print("\n");
  }
  else
  {
    servo_7.write(0);
    Serial.print("Door closed!!; Distance+");
    Serial.print(sen2value);
    Serial.print("\n");
  }
  delay(10);
}
      
  
    
  
  
  
 
  
	