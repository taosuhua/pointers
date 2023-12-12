#include "stdio.h"

typedef struct{
    int a;
    short b[2];
}EX2;
typedef struct EX{
    int a;
    char b[3];
    EX2 c;
    struct EX *d;
}EX;
int main(void){
    EX x = {
        10,
        "Hi",
        {
            5,
            {-1,25}     
        },
        0
    };
    EX *px = &x;
    px->d = px;
    printf("%d \n",px->c.b[1]);
    printf("%p %d\n",(*px).a,(*px).a);
    printf("px: %p   px->d: %p\n",px,px->d);
}