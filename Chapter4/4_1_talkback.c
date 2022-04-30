/**
 * @file 4_1_talkback.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 演示与用户交互
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>

#define DENSITY 62.4

int main(void){
    float weight, volume;
    int size, letters;
    //初始化一个叫做name的数组，包含40个char类型，在内存中占连续的40*1=40个字节
    char name[40];

    printf("Hi! What is your first name?\n");
    scanf("%s", name);

    printf("%s, what is your weight in pounds?\n", name);
    scanf("%f", &weight);

    size = sizeof name;
    //strlen函数返回字符串的长度
    letters = strlen(name);

    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);

    printf("Also you first name has %d letters.\n", letters);
    printf("And we have %d bytes to store it.\n", size);

    
    return 0;
}
