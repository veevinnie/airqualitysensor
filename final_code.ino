int sensorValue;
int pin8 = 8;
void setup()
{
  Serial.begin(9600);      
  pinMode(pin8, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(0);      
  Serial.print(sensorValue, DEC);  
  Serial.println("ppm");
  if (sensorValue > 500) {
    digitalWrite(pin8, HIGH);
  }
  else {
    digitalWrite(pin8, LOW);
  }

  delay(5000);                        
}
