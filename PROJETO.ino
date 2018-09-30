#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);
CapacitiveSensor capSensor2 = CapacitiveSensor(7,8);
int threshold =-1;
int threshold2 =-1;
const int ledPin = 12;
const int ledPin2 = 11;
void setup() {

Serial.begin(9600);

pinMode (ledPin,OUTPUT);
pinMode (ledPin2,OUTPUT);
}
void loop()
{
  long sensorValue = capSensor.capacitiveSensor(30);
  Serial.print(sensorValue);
  if (sensorValue > threshold){
  digitalWrite(ledPin, LOW);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
  delay(10);
   long sensorValue2 = capSensor2.capacitiveSensor(30);
  Serial.print(sensorValue2);
  if (sensorValue2 > threshold2){
  digitalWrite(ledPin2, LOW);
  }
  else{
    digitalWrite(ledPin2, HIGH);
  }
  delay(10);
}
  
