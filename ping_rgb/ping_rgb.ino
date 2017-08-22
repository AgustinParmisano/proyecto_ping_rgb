
#include <NewPing.h>

int r = 0;
int g = 0;
int b = 0;

int redPin = 3;
int greenPin = 5;
int bluePin = 6;


const int trig0 = 10;
int echo0 = 11;
const int trig1 = 1;
int echo1 = A1;

int distancia0;
int distancia1;
int dist0;
int pausa;

NewPing sonar(trig0, echo0, 200);


void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  distancia0 = sonar.ping_cm();
  dist0 = map(distancia0, 0, 200, 0, 255);
  if ((dist0 > 0) && (dist0 < 255)) {
    analogWrite(redPin, dist0);
    analogWrite(bluePin, 255 - dist0);
  }
  Serial.println(distancia0);
  Serial.println(dist0);
  analogWrite(greenPin, 0);
}
