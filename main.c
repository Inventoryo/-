#include "wiringPi.h"
#include <stdio.h>
int main() {

    if(wiringPiSetup()==-1){
        printf("fail to init!/n");
        return 0;
    }

    pinMode(1,OUTPUT);

    while(1){
        digitalWrite(8,HIGH);delayMicroseconds(50000);
        digitalWrite(8,LOW);delayMicroseconds(50000);
    }
    return 1;

}
