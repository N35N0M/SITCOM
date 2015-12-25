#include <NewPing.h>

// Author: Kris Monsen, 2015
// Credit (where credit is due) & lookups:  johnag (Ultrasonic example @instructables, http://bit.ly/1jBrk0R), Tim Eckel (NewPing-library, http://bit.ly/1pYs3OV)

#define echoPin 3
#define trigPin 4
#define maxDistance 200

NewPing ultrasonic(trigPin, echoPin, maxDistance);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(ultrasonic.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");

  delay(500);
}
