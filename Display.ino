const int segmentos[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

int contador = 0;
const int botonReinicio = 10;

void setup() {
  for (int i = 2; i <= 9; ++i) {
    pinMode(i, OUTPUT);
  }
  pinMode(botonReinicio, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(botonReinicio) == LOW) {
    contador = 0;
  } else {
    mostrarNumero(contador);
    delay(1000); // Espera 1 segundo
    contador = (contador + 1) % 10;
  }
}

void mostrarNumero(int numero) {
  for (int i = 0; i < 7; ++i) {
    digitalWrite(i + 2, segmentos[numero][i]);
  }
}
