/*  strdup函数返回一个字符串的副本，该副本存储于一块动态分配的内存中
*   函数首先试图获得足够的内存来存储这个副本。
*   如果内存成功分配，字符串就会被复制到这块新的内存，返回一个指向这块内存的指针
*
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define    ERROR_MEMORY         ("NO ENOUGH MEMORY.")

static char* stringdup(const char *string);
int main(void){
    char message[1024];
    char *m_message;
    scanf("%s",message);
    printf("The address of dump memory: 0x%p\n",message);
    m_message = stringdup(message);
    printf("%s",m_message);
    printf("The address of dynamic memory: 0x%p\n",m_message);
    free(m_message);
}


static char* stringdup(const char *string){
    char *p;
    p = malloc(strlen(string) + 1);
    if(p != NULL){
        strcpy(p,string);
        return p;
    }else{
        printf(ERROR_MEMORY);
        free(p);
        return NULL;
    }
}