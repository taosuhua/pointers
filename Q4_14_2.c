#include "stdio.h"

/// @brief 打印0~100之间的质数
/// @param  
void main(void){
    int i = 100;
    while(i > 0){
//        int j = 1;
        for(int j = 2; j <= i; j++){
            if((i % j) == 0 && i == j){
                    printf("%d ",i);
            }
            break;
        }
        i--;
    }
}