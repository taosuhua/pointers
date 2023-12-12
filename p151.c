#include "stdio.h"

void StringCopy(char *dst, const char src[]){
    while((*dst++ = *src++) != '\0');
}
int main(void){
    char *message;
    char srcMessage[] = "HelloWorldPointer.";
    StringCopy(message,srcMessage);
    printf(message);
}