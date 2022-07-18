
#include<Arduino.h>
int Z=0,Y=1,X=1,W=0;	//input
int D,C,B,A;

void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(2, A); //LSB
  digitalWrite(3, B); 
  digitalWrite(4, C); 
  digitalWrite(5, D); //MSB

}
void setup(){
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	}
void loop(){

  A=!W && !Z;
  B=(W &&!X && !Z) || (!W && X && !Z);
  C=(!W && Y && !Z) || (!X && Y && !Z) || (W && X && !Y && !Z);
  D = (W && X && Y && !Z)||(!W && !X && !Y && Z);
disp_7447(D,C,B,A); 

}

