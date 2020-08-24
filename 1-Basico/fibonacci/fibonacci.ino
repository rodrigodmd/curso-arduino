/*
 * Programa que imprime un numero de
 * la secuencia de fibonacci cada un segundo
 * 
 * 
 * A B C
 * 0 1 1
 * 1 1 2
 * 1 2 3
 * 2 3 5
 */

// Variables
int a = 0;
int b = 1;
int c;

void setup() {
  Serial.begin(9600);
}

void loop() {
  c = a + b;
  a = b;
  b = c;
  Serial.println(c);
  
  delay(1000);
}
