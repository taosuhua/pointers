#include "stdio.h"



void LongToShort(void){
    long a = 987654321;
    short b;
    b = a;
    printf("%d  %d\n",a,b);
}

void DoubleToFloat(void){
    double a = 3.14159265325;
    float b;
    b = a;
    printf("%f  %f\n",a, b);
}

void main(void){
    LongToShort();
    DoubleToFloat();
}