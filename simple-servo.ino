#include <Servo.h>

// Connect power and ground pins to Arduino +5V and ground, respectively.
const int PWM_PIN = 9; // Make sure this pin is capable of PWM output.

const int SERVO_MIN = 575; // minimum servo pulse length in microseconds.
const int SERVO_MAX = 2460; // maximum servo pulse length in microseconds.

const int DELAY_MS = 1000; // delay between min and max servo movements in milliseconds.

Servo servo;

void setup() {
    servo.attach(PWM_PIN);
}

void go_to_max() {
    servo.writeMicroseconds(SERVO_MAX);
}
void go_to_min() {
    servo.writeMicroseconds(SERVO_MIN);
}
void delay_movement() {
    delay(DELAY_MS);
}

void loop() {
    go_to_max();
    delay_movement();
    go_to_min();
    delay_movement();
}
