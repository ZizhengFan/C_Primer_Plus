/**
 * @file 3_3_bases.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 以十进制、八进制、十六进制打印十进制数100
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    int x = 100;

    printf("dex = %d; octal = %o; hex = %x\n", x, x, x);
    //在八进制和十六进制前加上0和0x的前缀需要用到#符号
    printf("dex = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}