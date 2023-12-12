#include "stdio.h"

void main(void){
    double n,b,a = 1.0;
//    printf("%f %f %f",n,b,a);
    scanf("%lf",&n);
    while(1){
        b = (a + n / a) / 2.0;
        if(b == a){
            break;
        }
        a = b;
    }
    printf("%lf SQUARE ROOT IS %lf",n,a);
}