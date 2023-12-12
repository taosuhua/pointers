#include "stdio.h"

int identity_matrix_byptr(int **matrix, int size){
    int *p = *matrix;
    int tmp = *p;
    int i = size;
    while(i>0){
        // if(*p != tmp){
        //     return 0;
        // }
        printf("%p  %d \n",p,*p);
        p += (size + 1);;
        i--;
        // p += (size+1);
    }
    return 1;    
}

int main(void){
    int m[][10] = {
        {1},
        {0,1},
        {0,0,1},
        {0,0,0,0,1},
        {0,0,0,0,1},
        {0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,1}
    };
    int **ptr;
    int result;
    printf("%p \n",&m);
    ptr = (int**)m;
    printf("%p \n",ptr);
    result = identity_matrix_byptr((int**)ptr,10);
    printf("%d \n",result);
}


