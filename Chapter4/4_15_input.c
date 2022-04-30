/**
 * @file 4_15_input.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 何时使用&
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 *! 如果用scanf()读取基本变量类型的值，在变量名前加上一个&；
 *! 如果用scanf()把字符串读入字符数组中，不要使用&

 * scanf()函数使用空白（换行符、制表符和空格）把输入分成多个字段。
 *? 唯一例外的是%c转换说明
 */

#include <stdio.h>

int main(void){
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);

    printf("%d $%.2f %s\n", age, assets, pet);
    
    return 0;
}