/*
 * Programa cambia el estado del led cuando el boton 
 * es presionado.
 * 
 */
// Constantes
int PIN_LED = 9;
int PIN_BOTON = 5;

// Variaibles
int estado = 0;
int estadoAnterior = 0;
int LED_estado = 0;


void setup() {
  // Inicializando led
  pinMode(PIN_LED, OUTPUT);
  // Inicializando boton
  pinMode(PIN_BOTON, INPUT);
}

void loop() {
  // Leyendo boton
  estado = digitalRead(PIN_BOTON);
  
  if (estado != estadoAnterior && estado == 1) {
      LED_estado = !LED_estado;
      digitalWrite(PIN_LED, LED_estado);
      delay(200);
  }

  estadoAnterior = estado;
}
