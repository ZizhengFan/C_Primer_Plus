/**
 * @file 3_10_escape.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 使用一些特殊的转义序列
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    float salary;

    printf("\aEnter your desired monthly salary:");

    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
    printf("\rGee!\n");

    return 0;
}