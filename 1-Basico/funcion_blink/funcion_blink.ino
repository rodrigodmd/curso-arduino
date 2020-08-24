/*
A B C
0 1 1
1 1 2
1 2 3
2 3 5

*/

// Variables
int a = 0;
int b = 1;
int c;

void setup() {
  Serial.begin(9600);
  x=1;

}

void loop() {
  for (int i = 0; i<3; i++) {
    Serial.println(i);
    blink();
  }
  delay(1000);
}

void blink() {
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}
