#include "stdio.h"
#include "stdlib.h"
#define     INIT_NUM        10

static void intcpy(int *dst, int *src){
    *dst = *src;
}

int main(void){
    int *p,*array;
    int i = 0,a,j;
    array++;
    while(printf("INPUT: ") && scanf("%d",&a) != EOF){
        i++;
       *array = a;
       array++;
    }
    p = malloc(i * sizeof(int));
    *p++ = i;
    for(j = 0; j < i; j++){
        *p++ = *array++;
    }
    printf("%d",i);
    for(j = 0; j < i; j++){
        printf("%d ",*(p + j));
    }
    free(p);
}
