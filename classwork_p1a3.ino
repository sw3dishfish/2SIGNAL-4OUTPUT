//2 INPUT 4 OUTPUT
//by Aldrick Victor Tadeo Arellano
//Feb 2021




//2 entradas digitales
//4 salidas digitales
//IN 1 activa OUT 1 y 5
//IN 2 activa OUT 6 y 7

int SIGNAL0=0;
int SIGNAL1=0; 

const int INPUT1 = 2;
const int INPUT2 = 3;

void setup(){
  pinMode(INPUT1, INPUT);
  pinMode(INPUT2, INPUT);
  pinMode(1, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop(){
  SIGNAL0 = digitalRead(INPUT1);
  digitalWrite(1, SIGNAL0);
  digitalWrite(5, SIGNAL0);

  SIGNAL1 = digitalRead(INPUT2);
  digitalWrite(6, SIGNAL1);
  digitalWrite(7, SIGNAL1);
}