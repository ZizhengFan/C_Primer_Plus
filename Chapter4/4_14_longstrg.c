/**
 * @file 4_14_longstrg.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 打印较长的字符串
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void){
    //此处不能有缩进，此处的缩进会成为字符串的一部分
    printf("Here is a really long string\
that I'm going to print on multiple lines.\n");

    //字符串连接法，C编译器会将多个字符串看作一个字符串
    printf("Or here is a new way to print a "
    "long string.\n");
    
    return 0;
}
