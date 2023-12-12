#include "stdio.h"
#include "stdlib.h"
#include "p226.h"

static int* get_array(int nvalue){
    int i, *array;
    array = malloc(nvalue * sizeof(int));
    if(array == NULL){
        printf("No more memory.");
        free(array);
        return 0;
    }
    for(i = 0; i < nvalue; i++){
        printf("[%02d]:",i);
        scanf("%d",array + i);
    }
    return array;
}
static void remove_array(int *array){
    free(array);
}
int main(void){
    int *a, n, i;
    printf("Input the number of the array:");
    scanf("%d",&n);
    if(n > 0){
        a = get_array(n);
    }
    asort(a,n,ascend);
    for(i = 0; i < n; i++){
        printf("A[%d] = %d\n",i,a[i]);
    }
    remove_array(a);
}

static void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void asort(int *array, int nvalue, int (*compare)(int,int)){
    int i, j;
    for(i = nvalue; i > 0; i--){
        for(j = 0; j < (i - 1); j++){
            if((compare)(array[j], array[j + 1])){
                swap(&array[j],&array[j + 1]);
            }
        }
    }
}
int ascend(int a, int b){
    return a > b;
}
int descend(int a, int b){
    return a < b;
}

