#include "stdio.h"

typedef char *ptr_to_char;
#define d_ptr_to_char   char*

void testPointer(void);

char *message;
void main(void){
    message = "Hello Japan.";
    printf("%x",testPointer);
    testPointer();
}

void testPointer(void){
    extern char *message;
    printf("%x = %c\n",message,*message);
    printf(message);
    char *temp;
    temp = message + 1;
    printf("%x = \n",temp,*temp);
}