int buzzer = 10; 
int sensor = A5;

void setup() {
  
  pinMode (buzzer, OUTPUT);
  pinMode (sensor, INPUT);
  Serial.begin(9600);
}

void loop() {

  Serial.println(analogRead(sensor));
  if (analogRead(sensor) > 625 ) {
    analogWrite (buzzer, 60);
  } else {
    analogWrite (buzzer, 0);
  }
}
