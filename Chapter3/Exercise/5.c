/**
 * @file 5.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 显示该年龄对应的秒数
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * 一年大约有3.156e7秒。编写一个程序，
 * 提示用户输入年龄，然后显 示该年龄对应的秒数
 */

#include <stdio.h>

#define SECONDSINYEAR 3.156e7

int main(){
    int age;
    double secondsOfAge;

    printf("Age here: ");
    scanf("%d", &age);

    secondsOfAge = SECONDSINYEAR * age;

    printf("The seconds of your age is: %.2f\n", secondsOfAge);

    return 0;
}