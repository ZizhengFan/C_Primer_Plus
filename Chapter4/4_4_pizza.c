/**
 * @file 4_4_pizza.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 在比萨饼程序中使用已定义的常量
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#define PI 3.14159

int main(void){
    float area, circum, radius;
    // const int shit = 38;
    // shit = 10;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circum = %1.2f, area = %1.2f\n", circum, area);
    
    return 0;
}