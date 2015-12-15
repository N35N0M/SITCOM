// Author: Kris Monsen, 2015
// Credit (where credit is due) & lookups:  johnag (Ultrasonic example @instructables, http://bit.ly/1jBrk0R), Tim Eckel (NewPing-library, http://bit.ly/1pYs3OV)



#define echoPin 2
#define trigPin 4

void setup() {
  // put your setup code here, to run once:
  

  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
