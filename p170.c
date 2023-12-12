#include "stdio.h"

char char_value[][6][4][5]={
    {   /* 0 */
        {
            {0}
        }
    },
    {   /* 1 */
        {/* 1 0*/
            { 0 }
        },
        {/* 1 1*/
            { 0 },
            {0,' '}
        },
        {/* 1 2*/
            { 0 },
            { 0 },
            {0,0,0,'A'},
            {0,0,0,0,'x'}
        },
        {/* 1 3*/
            { 0 },
            { 0 },
            {0,0,0xF3}
        },
        {/* 1 4*/
            { 0 },
            { 0 },
            {0,0,0,'\n'}
        }
    },
    {   /* 2 */
        { /* 2 0*/
            { 0 }
        },
        { /* 2 1*/
            { 0 },
            {0,0,0320}
        },
        { /* 2 2*/
            { 0 },
            {0,'0'},
            {0,0,'\''},
            {0,'\121'}
        },
        { /* 2 3*/
            { 0 }
        },
        { /* 2 4*/
            { 0 },
            { 0 },
            { 0 },
            { 0,0,'3',1 }
        },
        { /* 2 5*/
            { 0 },
            { 0 },
            { 0 },
            {0,0,0,0,125}
        }
    }
};

int main(void){
    printf("StartAddressOf(char_value):%p \n",char_value);
    printf("%c\n",char_value[1][2][2][3]);
    printf("%c\n",char_value[1][1][1][1]);
    printf("%c\n",char_value[1][3][2][2]);
    printf("%c\n",char_value[2][4][3][2]);
    printf("%c\n",char_value[1][4][2][3]);
    printf("%c\n",char_value[2][2][3][1]);
    printf("%c\n",char_value[2][4][3][3]);
    printf("%c\n",char_value[2][5][3][4]);
    printf("%c\n",char_value[1][2][3][4]);
    printf("%c\n",char_value[2][1][1][2]);
    printf("%c\n",char_value[2][2][2][2]);
    printf("%c\n",char_value[2][2][1][1]);

}