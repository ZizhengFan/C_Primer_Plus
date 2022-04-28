/**
 * @file 2.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    int a;

    printf("Enter a int num between 0~127 here: ");
    scanf("%d", &a);
    printf("%c\n", a);
    
    return 0;
}