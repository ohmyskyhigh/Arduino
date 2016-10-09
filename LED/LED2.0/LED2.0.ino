int m[3] = {11, 12, 13};

void setup() {
  // put your setup code here, to run once:
  pinMode(m[0], OUTPUT);
  pinMode(m[1], OUTPUT);
  pinMode(m[2], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++){
    digitalWrite(m[i], HIGH);
    delay(100);
    digitalWrite(m[i], LOW);
    delay(1000);
  }
}
