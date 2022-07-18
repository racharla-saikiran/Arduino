/*Implementation of finite state machine and detection of 101 using d-latch*/

#include<Arduino.h>
int a=0,b=0,Da,Db;
int I[3]={1,0,1},x=1,y;
int clock(int a){
	if (a==1)
	return 0;
	else
	return 1;
	}

void disp(int a, int b,int c,int d,int e,int f,int g){
digitalWrite(6,a);
digitalWrite(7,b);
digitalWrite(8,c);
digitalWrite(9,d);
digitalWrite(10,e);
digitalWrite(11,f);
digitalWrite(12,g);
}
void sevseg(int a){
		if(a==1)
		disp(1,0,0,1,1,1,1);
		else
		disp(0,0,0,0,0,0,1);
}
void null(){
	disp(1,1,1,1,1,1,1);
	}
void setup(){
	pinMode(2,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(10,OUTPUT);
	pinMode(11,OUTPUT);
	pinMode(12,OUTPUT);
	pinMode(13,OUTPUT);
}

void loop(){
    
    for(int i=0;i<6;i++){
		if(x==1){
        Da=(a && !b && I[i/2]) || (!a && b && !I[i/2]);
        Db=I[i/2] && !(a && b); 
        y=(Da && Db);
        a=Da;
        b=Db;
        sevseg(I[i/2]);
        
        digitalWrite(2,I[i/2]);
        digitalWrite(5,y);
        digitalWrite(13,HIGH);
        delay(1000);
        
        
    }
    else{
		digitalWrite(13,LOW);
		digitalWrite(2,LOW);
		digitalWrite(5,LOW);
		null();
		delay(2000);
	}
    x=clock(x);
}

    a=0;
    b=0;
}


