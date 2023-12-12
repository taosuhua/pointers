#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main(void){
    char *p = malloc(1024 * sizeof(char));
    scanf("%s",p);
    printf("%p\n",p);
    p = realloc(p,strlen(p) + 1);
    printf("%p\n",p);

    printf("%d",strlen(p));

}