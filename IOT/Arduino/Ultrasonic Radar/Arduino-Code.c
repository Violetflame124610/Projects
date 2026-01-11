#include <Servo.h>

const int SERVO_PIN = 11;
const int TRIG_PIN = 8;
const int ECHO_PIN = 9;

const int MIN_ANGLE = 0;
const int MAX_ANGLE = 180;
const int ANGLE_STEP = 1;
const int SWEEP_DELAY = 15;

const float SOUND_SPEED_FACTOR = 58.2; 

Servo myServo;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  myServo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void loop() {

  sweepAndMeasure(MIN_ANGLE, MAX_ANGLE, ANGLE_STEP);
  
  sweepAndMeasure(MAX_ANGLE, MIN_ANGLE, -ANGLE_STEP);
}

/**
 * @brief Sweeps the servo motor and measures the distance at each step.
 * @param startAngle The starting angle of the sweep.
 * @param endAngle The ending angle of the sweep.
 * @param step The increment or decrement for the angle.
 */
void sweepAndMeasure(int startAngle, int endAngle, int step) {
  for (int angle = startAngle; (step > 0) ? (angle <= endAngle) : (angle >= endAngle); angle += step) {
    myServo.write(angle);
    delay(SWEEP_DELAY);
    int distance = calculateDistance();
    printData(angle, distance);
  }
}

/**
 * @brief Calculates the distance using the ultrasonic sensor.
 * @return The calculated distance in centimeters.
 */
int calculateDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  return static_cast<int>(duration / SOUND_SPEED_FACTOR);
}

/**
 * @brief Prints the angle and distance data to the Serial Monitor.
 * @param angle The current angle of the servo.
 * @param distance The measured distance.
 */
void printData(int angle, int distance) {
  Serial.print(angle);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
}
