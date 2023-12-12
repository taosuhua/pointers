#include "stdio.h"
#include "string.h"

int main(void){
    char m1[30] = "Hello";
    char m2[] = "World";
    char *p;
    printf("%p     %s\n",m1,m1);
    printf("%p     %s\n",m2,m2);
    p = strcat(m1,m2);
    printf("%p     %s\n",p,p);    
}