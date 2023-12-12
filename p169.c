#include "stdio.h"

int main(void){
    int array[5][6];
    int *p = array[3,4];        //这里按中括号里面最后一个下标取值
    printf("Pointer of array[4] is %p\n",&array[4]);
    printf("Pointer of p is %p\n",p);
}