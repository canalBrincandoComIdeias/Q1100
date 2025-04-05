#define pinSensor 7
#define pinBuzzer 5

void setup() {
  pinMode(pinSensor, INPUT);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  //Leitura para o Módulo Sensor de Efeito Hall
  bool estadoSensor = !digitalRead(pinSensor);

  if (estadoSensor) { //Se ima detectado
    tone(pinBuzzer, 400); 
  } else {
    noTone(pinBuzzer);
  }

}
