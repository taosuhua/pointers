#include "stdio.h"
#include "string.h"

typedef struct{
    char name[128];
    char address[1024];
    char phone[11];
} Contact;

void func(Contact *c){
    
}

int main(void){
    Contact emmployee;
    strcpy(emmployee.name, "BlackDana");
    printf("%s",emmployee.name);
    
}

