int LED_white = 13;
int LED_red = 12;
int LED_green = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_white, OUTPUT);
  pinMode(LED_red, OUTPUT);
  pinMode(LED_green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_white, HIGH);
  delay(100);
  digitalWrite(LED_white, LOW);
  delay(1000);
  digitalWrite(LED_red, HIGH);
  delay(100);
  digitalWrite(LED_red, LOW);
  delay(1000);
  digitalWrite(LED_green, HIGH);
  delay(100);
  digitalWrite(LED_green, LOW);
  delay(1000);
}
