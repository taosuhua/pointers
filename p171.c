/***********************************************************************
*如果A是个x行y列的矩阵，B是个y行z列的矩阵，把A和B相乘，其结果
*将是另一个x行z列的矩阵C。这个矩阵的每个元素是由下面的公式决定的：
*       C(i,j) = SUM(A(i,k) x B(k,j));
*编写一个函数，用于执行两个矩阵的乘法。函数的原型如下：
*    void matrix_multiply(int *m1,int *m2,int *r, int x, int y, int z);
*m是一个x行y列的矩阵，m2是一个y行z列的矩阵。这两个矩阵应该相乘，结果存储于r中，
*它是一个x行z列的矩阵。
************************************************************************/

#include "stdio.h"

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z){
    int i,j,k;
    int result = 0;
    for(i = 0; i < x; i++){
        for(k = 0; k < z; k++){
            for(j = 0; j < y; j++){
                result += (*(m1 +(i * y) + j)) * (*((m2 + k) +j*z));
            }
            *r++ = result;
            result = 0;
        }
    }
}

int main(void){
    int i;
    int a[3][2] = {
        {2,-6},
        {3,5},
        {1,-1}
    };
    int b[2][4] = {
        {4,-2,-4,-5},
        {-7,-3,6,7}
    };
    int c[3][4] = {};
    matrix_multiply(&*a[0],&*b[0],&*c[0],3,2,4);
    for(i = 0; i < 12; i++){
        printf("%d \n",*(*c+i));
    }
}