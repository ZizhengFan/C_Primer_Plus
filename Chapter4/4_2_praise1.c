/**
 * @file 4_2_praise1.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 使用不同类型的字符串
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void){
    char name[40];
    
    printf("What's your name? ");
    scanf("%s", name);

    printf("Hello, %s. %s\n", name, PRAISE);
    
    return 0;
}