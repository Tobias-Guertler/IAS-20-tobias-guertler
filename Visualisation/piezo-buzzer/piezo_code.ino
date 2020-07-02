//Potentiometer
const int input = A0;
//piezo buzzer
const int output = 13;

void setup()
{
  pinMode(output, OUTPUT);
  pinMode(input, INPUT);
  Serial.begin(9600);
}

void loop()
{
    //set the tone of the speaker according to the value read from potentiometer
    int temp = analogRead(input);
    temp = map(temp, 0, 1023, 0, 500);
    tone(output, temp);

    //print the value on screen to visualise which value creates a desirable tone
    Serial.println(temp);
}
