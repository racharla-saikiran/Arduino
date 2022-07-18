#include<Arduino.h>
void disp(int a,int b,int c,int d){
digitalWrite(2,d);
digitalWrite(3,c);
digitalWrite(4,b);
digitalWrite(5,a);
}
void setup(){
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}
void loop(){

disp(1,0,0,1);
}
