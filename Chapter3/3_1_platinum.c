/**
 * @file 3_1_platinum.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);
    
    //白金的价格是每盎司$1700
    //14.5833用于把英镑常衡盎司转换为金衡盎司
    value = 1700.0 * weight * 14.5833;

    printf("\n");
    printf("Your weight in platium is worth %.2f\n", value);
    printf("You are easily worth that! If platium prices drop,\n");
    printf("eat more to maintain your value.\n");

    getchar();
    getchar();

    return 0;
}