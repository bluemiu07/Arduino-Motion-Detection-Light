const int MOTION_SENSOR_PIN = 7;   // Arduino pin connected to the OUTPUT pin of motion sensor
const int LED_PIN1           = 4;   // Arduino pin connected to LED's pin
const int LED_PIN2           = 5;   // Arduino pin connected to LED's pin
const int LED_PIN3           = 6;   // Arduino pin connected to LED's pin
int motionStateCurrent      = LOW; // current  state of motion sensor's pin
int motionStatePrevious     = LOW; // previous state of motion sensor's pin

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(MOTION_SENSOR_PIN, INPUT); // set arduino pin to input mode
  pinMode(LED_PIN1, OUTPUT);          // set arduino pin to output mode
  pinMode(LED_PIN2, OUTPUT);          // set arduino pin to output mode
  pinMode(LED_PIN3, OUTPUT);          // set arduino pin to output mode
}

void loop() {
  motionStatePrevious = motionStateCurrent;             // store old state
  motionStateCurrent  = digitalRead(MOTION_SENSOR_PIN); // read new state

  if (motionStatePrevious == LOW && motionStateCurrent == HIGH) { // pin state change: LOW -> HIGH
    Serial.println("Motion detected!");
    digitalWrite(LED_PIN1, HIGH); // turn on
  }
  else
  if (motionStatePrevious == HIGH && motionStateCurrent == LOW) { // pin state change: HIGH -> LOW
    Serial.println("Motion stopped!");
    digitalWrite(LED_PIN1, LOW);  // turn off
    delay(2000);
  }
    if (motionStatePrevious == LOW && motionStateCurrent == HIGH) { // pin state change: LOW -> HIGH
    Serial.println("Motion detected!");
    digitalWrite(LED_PIN2, HIGH); // turn on
  }
  else
  if (motionStatePrevious == HIGH && motionStateCurrent == LOW) { // pin state change: HIGH -> LOW
    Serial.println("Motion stopped!");
    digitalWrite(LED_PIN2, LOW);  // turn off
    delay(2000);
  }
    if (motionStatePrevious == LOW && motionStateCurrent == HIGH) { // pin state change: LOW -> HIGH
    Serial.println("Motion detected!");
    digitalWrite(LED_PIN3, HIGH); // turn on
  }
  else
  if (motionStatePrevious == HIGH && motionStateCurrent == LOW) { // pin state change: HIGH -> LOW
    Serial.println("Motion stopped!");
    digitalWrite(LED_PIN3, LOW);  // turn off
    delay(2000);
  }
}
