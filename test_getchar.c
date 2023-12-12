#include "stdio.h"

int main(void){
    char *message;
    scanf("%d",message);
    printf("%d",sizeof(*message));

    printf("error.");
}