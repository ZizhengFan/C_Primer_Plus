/**
 * @file 4_6_printout.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 使用转换说明
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#define PI 3.141593

int main(void){
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', cost);
    
    return 0;
}