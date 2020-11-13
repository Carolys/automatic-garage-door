#include <Servo.h>
Servo myservo;
int pos;
char leitura;
int pinoledvermelho = 13;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(pinoledvermelho, OUTPUT);
  pos = 180;
}

void loop() {
  //if (Serial.available() > 0) {
  leitura = Serial.read();
  //  Serial.println(leitura);
  // Serial.print(leitura);
  if (leitura == 'C') {
    myservo.write(0);
    pos = 0;
    delay(15);
  }
  else if (leitura == 'D') {
    digitalWrite(pinoledvermelho, HIGH);
  }
  //} else Serial.end(); // Fim da conexão
}
