/*Display of output of a kmap in a seven segment display*/

#include<Arduino.h>
int a,b,c,d,x;

void disp(int a, int b,int c,int d,int e,int f,int g){
digitalWrite(6,a);
digitalWrite(7,b);
digitalWrite(8,c);
digitalWrite(9,d);
digitalWrite(10,e);
digitalWrite(11,f);
digitalWrite(12,g);
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
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}

void loop(){
a=digitalRead(2);
b=digitalRead(3);
c=digitalRead(4);
d=digitalRead(5);
x= (!b && !d)|| (a && c && !d) || (!a && b && !(c) && d);
if (x==1)
disp(1,0,0,1,1,1,1);
else
disp(0,0,0,0,0,0,1);
}
