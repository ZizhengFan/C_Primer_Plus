/**
 * @file 3_5_charcode.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 显示字符的代码编号
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);
    
    return 0;
}