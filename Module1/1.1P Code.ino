#define SensorPin A0 
#define LEDPin 13

float sensorValue; 
void setup() { 
  Serial.begin(9600); 
  pinMode(LEDPin, OUTPUT);
  digitalWrite(LEDPin, LOW);
} 
void loop() { 
  sensorValue = analogRead(SensorPin);
  Serial.print("Sensor Value: "); 
  Serial.println(sensorValue);
  if(sensorValue > 400)
  {
    Serial.println("Wet, LED ON");
    digitalWrite(LEDPin, HIGH);
  }
  else
  {
    Serial.println("Dry, LED OFF");
    digitalWrite(LEDPin, LOW);
  }
  
  delay(500); 
} 