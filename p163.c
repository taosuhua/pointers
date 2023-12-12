#include "stdio.h"
#include "string.h"

#define N_KEYWORD   (sizeof(keywords) / sizeof(keywords[0]))

const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "inline", "int", "long", "register", "restrict", "return", "short",
        "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", "_Alignas", "_Alignof",
        "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn",
        "_Static_assert", "_Thread_local"
    };
int lookup_keywords(const char *keyword, const char *keywords_table[],const int size){
    const char **kwp;
    for(kwp = keywords_table; kwp < keywords_table + size; kwp++){
        if(strcmp(keyword,*kwp) ==0){
            return kwp - keywords_table;
        }
    }
    return 0;
}
int main(void){
    char *mykeyword = "return";
    int result = lookup_keywords(mykeyword,keywords,N_KEYWORD);
    printf("%d = %s\n",result,keywords[result]);
    printf("size of keywords[0] is %d ,value of keywords[0] is %p\n",sizeof(keywords[0]),keywords[0]);
}
