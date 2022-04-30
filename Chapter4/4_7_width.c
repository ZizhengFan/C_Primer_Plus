/**
 * @file 4_7_width.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 字段宽度在打印整数时的效果
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#define PAGES 959

int main(void){
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    return 0;
}