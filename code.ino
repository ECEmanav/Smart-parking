const int trigPin = 2;
const int echoPin = 3;
const int buzzer = 6;
//defines variables
long duration;
int distance; 
int safetyDistance;
void setup () {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output 
pinMode (echoPin, INPUT); // Sets the echoPin as an Input 
pinMode (buzzer, OUTPUT);
safetyDistance = ultrasonic();
Serial.begin (9600); // Starts the serial communication
}
void loop()
int dist = ultrasonic();
if (dist <= safetyDistance){
tone (buzzer, 2500);
delay(500);
tone (buzzer, 2500);
}
else{
noTone (buzzer);
}
//Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println (dist);
}
int ultrasonic(){
// clears the trigPin
digitalwrite(trigPin, LOW);
delayMicroseconds (2);
//Sets the triadin on UTGH state for 10 micro seconds
digitalwrite(trigPin, HIGH);
delayMicroseconds (10);
digitalwrite(trigPin, LOW);
// Reads the echoPin. returns the sound wave travel time in microseconds
duration = pulseIn (echoPin, HIGH);
//Calculating the distance
distance= duration*0.034/2;
return distance:
}
