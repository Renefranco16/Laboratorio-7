const int sensorPin = A0; 
float temperaturaCelsius;

void setup() {
    Serial.begin(9600); // Inicializa la comunicación serial
}

void loop() {
    int lecturaSensor = analogRead(sensorPin); // Lee el valor del sensor
    temperaturaCelsius = (lecturaSensor * 5.0 / 1023.0) * 100.0; // Convierte la lectura a grados Celsius

    Serial.print("Temperatura: ");
    Serial.print(temperaturaCelsius);
    Serial.println(" °C");

    delay(1000); 
}
