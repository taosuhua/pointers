#include "stdio.h"
#include "stdlib.h"

int main(void){
    long long max= 0;
    void *p = NULL;
    while( (p = malloc(1000*1024)) != NULL){
        max ++;
    }
    printf("%lld MB\n",max);
}