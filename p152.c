//数组静态初始化

#include "stdio.h"

int main(void){
    int a[10] = {};     //添加花括号完成初始化
    int i;
    for(i = 0; i < 10; i++){
        printf("%d ",a[i]);
    }
}