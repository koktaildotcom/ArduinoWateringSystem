#define redPin 3
#define greenPin 4
#define bluePin 5

int mostureSensor = 0;
int fadeSpeed = 5;

void setup() {
  // Serial Begin so we can see the data from the mosture sensor in our serial input window. 
  Serial.begin(9600);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(mostureSensor);
  int r = 0;
  
  Serial.println(sensorValue);

  setColor(0, 0, 0);
  if( sensorValue > 50 ){
    setColor(255, 0, 0);
  }
  
  delay(50);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
