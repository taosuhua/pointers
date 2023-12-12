#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main(void){
    char *p;
    p = malloc(128 * sizeof(char));
    strcpy(p,"HelloWorld");
    printf("%p",p);
}