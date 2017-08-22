#include <NewPing.h>

const int trig = 10;
const echo = 11;

int distancia;
int pausa;

NewPing sonar(trig, echo, 200);

void setup(){
}


void loop(){
	distancia = sonar.ping_cm();
}
