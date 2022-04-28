/**
 * @file 7.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 以厘米为单位显示身高
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1英寸相当于2.54厘米
 * 编写一个程序，提示用户输入身高（/英寸）
 * 然后以厘米为单位显示身高
 */

#include <stdio.h>

#define INCHTOCM 2.54

int main(void){
    float height;

    printf("Enter you height in inch: ");
    scanf("%f", &height);

    printf("\nyour height is %.2f in cm!\n", INCHTOCM * height);
    
    return 0;
}