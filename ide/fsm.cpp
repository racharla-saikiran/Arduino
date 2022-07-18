// 011 sequence using 7474 fsm detector
#include<Arduino.h>
int a=0,b=0;
int c,w,y,da,db;

void setup(){     //12th pin as clk and 15,17,19,21 as input pins and 16,18,20,22  as output pins
    pinMode(2,INPUT);
    pinMode(3,INPUT);
    pinMode(4,OUTPUT);
    pinMode(5,INPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  a=digitalRead(3);
  b=digitalRead(2);
  delay(1000);
  digitalWrite(13,HIGH);
  delay(1000);
  w=digitalRead(5);
  digitalWrite(13,LOW);
  c=w;
  da=(a &&(!c)) || (b && (!c));
  db=(!c)&&(!a)&&(!b);
  y=a&&(!c);;
  digitalWrite(4,!y);
  digitalWrite(9,da);
  digitalWrite(8,db);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);  
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  
}
