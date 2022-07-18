/*Implementation of finite state machine and detection of 101 using d-latch*/

#include<Arduino.h>
int a=0,b=0,Da,Db;
int p,x=1,y;
int clock(int a){
	if (a==1)
	return 0;
	else
	return 1;
	}

void setup(){
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(8,INPUT);
	pinMode(13,OUTPUT);
}

void loop(){
    
		if(x==1){
			
		p=digitalRead(8);
        Da=(a && !b && p) || (!a && b && !p);
        Db=p ; 
        y=(Da && Db);
        y=!y;
        digitalWrite(2,Da);
        digitalWrite(3,Db);
        digitalWrite(4,y);
        digitalWrite(13,HIGH);
        a=Da;
        b=Db;
        delay(1000);
    }
    else{
		digitalWrite(13,LOW);
		delay(2000);
	}
	
    x=clock(x);
}


