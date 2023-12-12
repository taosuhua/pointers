#include "stdio.h"
#define INCOME_STEPS    5

const float income_stage[]={              //标准含税收入数组
    0,
    23350,
    56550,
    117950,
    256500
};
const float tax_rate[][2]={             //标准税率
    {0,0.15},
    {3502.5,0.28},
    {12798.5,0.31},
    {31832.5,0.36},
    {81710.5,0.396}
};
int income_level(const float *income_table,float income){       //计算收入等级
    int i;
    for(i = INCOME_STEPS - 1;i >= 0; i--){
        if(income > *(income_table + i)){
            return i;
        }
    }
    return -1;
}
/// @brief 计算税额
/// @param rate_table 
/// @param level_table 
/// @param level_func 
/// @param income 
/// @return 
float tax_calculator(const float (*rate_table)[2],const float *level_table,int (*level_func)(const float (*),float),float income){
    int i = (level_func)(level_table,income);
    float tax;
    tax = rate_table[i][0] + (income - level_table[i])*rate_table[i][1];
    return tax;
}
int main(void){
    //test 
    float income = 256500.0;
    float result = tax_calculator(tax_rate,income_stage,income_level,income);
    printf("%f ",result);

}