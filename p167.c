//写一个程序用于判断输入的字符串是否是回文

#include "stdio.h"
#include "string.h"
#define MAX_SIZE    200

void isLoopStr(const char *str,int len){
    const char *pFront = str;
    const char *pEnd = str + len - 1;
    int n = len;
    while(pFront < pEnd){
        if(*pFront != *pEnd){
            printf("%s is not a palindrome!\n",str);
            break;
        }
        pFront++;
        pEnd--;
    }
    if(pFront >= pEnd){
        printf("Surprise! %s is a palindrome!\n",str);
    }
}

int main(void){
    int length;
    char inputs[MAX_SIZE];
    while(strcmp(inputs,"exit") !=0){
        printf("=======================================\n");
        scanf("%s[^\n]",inputs);        //从标准输入获取一个字符串，将字符串存入inputs字符数组
        length = strlen(inputs);
        printf("%s LEN[%d]\n",inputs,length);
        isLoopStr(inputs,length);
    }
}