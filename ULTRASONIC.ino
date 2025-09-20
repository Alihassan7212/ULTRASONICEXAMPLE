// Define pins
const int trigPin = 9;
const int echoPin = 10;

// Variables for duration and distance
long duration;
int distance;

void setup() {
  // Start the serial monitor
  Serial.begin(9600);
  Serial.print("ppp");

  // Set pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10us HIGH pulse to trigger the sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, return sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm (speed of sound = 34300 cm/s)
  distance = duration * 0.034 / 2;

  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance<=5)
  digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);

  // Delay for readability
  delay(500);
}
