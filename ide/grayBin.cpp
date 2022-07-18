/*Conversion of gray code to binary code*/

#include<Arduino.h>
int p,q,r,s;
int w,x,y,z;
int xo(int a,int b){
	if(a==b){

		return 0;
	}
	else{
		return 1;
	}
}
void gray2bin(int a,int b,int c,int d){
	digitalWrite(6,a);
	digitalWrite(7,b);
	digitalWrite(8,c);
	digitalWrite(9,d);
}
void setup(){
	pinMode(2,INPUT);
	pinMode(3,INPUT);
	pinMode(4,INPUT);
	pinMode(5,INPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(9,OUTPUT);
	}
void loop(){
	p= digitalRead(2);
	q= digitalRead(3);
	r= digitalRead(4);
	s= digitalRead(5);

	w=p;
	x= xo(p,q);
	y=xo(x,r);
	z=xo(y,s);
	gray2bin(w,x,y,z);

}

