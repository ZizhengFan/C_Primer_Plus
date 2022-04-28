/**
 * @file 4.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 各种打印
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * 编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。
 * 然后，如果系统支持，再打印成p记数法（即十六进制记数法）。
 * 按以下格式输出（实际显示的指数位数因系统而异）
 * 
 */

#include <stdio.h>

int main(){
    float afloat;

    printf("Enter a floating-point value: ");
    scanf("%f", &afloat);

    printf("\nfixed-point notation: %.6f\n", afloat);
    printf("exponential notation: %e\n", afloat);
    printf("p notation: %a", afloat);
    
    return 0;
}
