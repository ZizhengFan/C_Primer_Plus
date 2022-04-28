/**
 * @file 3.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    int age;
    int days;

    age = 24;

    days = 365 * age;

    printf("I am %d years old.\n", age);
    printf("Days are %d.\n", days);
    return 0;
}