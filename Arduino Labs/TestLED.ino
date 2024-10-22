
const char* LED_R 7;
const char* LED_G 6;
const char* LED_B 5;

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);

}

void loop() {
  output(HIGH);
  delay(1000);
  
  output(LOW);
  delay(1000);
}

void output(bool state) {
  digitalWrite(LED_R, state);
  digitalWrite(LED_G, state);
  digitalWrite(LED_B, state);
}