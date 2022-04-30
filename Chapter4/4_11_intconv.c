/**
 * @file 4_11_intconv.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 一些不匹配的整型转换
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void){
    short num = PAGES;
    short mnum = -PAGES;
    
    printf("num as short and unsigned short: %hd, %hu\n", num, num);
    printf("minus num as short and unsigned short: %hd, %hu\n", mnum, mnum);
    /*
    如果把一个大于255的值转换成字符会发生什么情况。
    在我们的系统中，short int是2字节，char是1字节。
    当printf()使用%c打印336时，它只会查看储存336的2字节中的后1字节。
    这种截断（见图4.8）相当于用一个整数除以256，只保留其余数。
    */
    printf("num as int and char: %d, %c\n", num, num);
    /*
    最后，我们在该系统中打印比short int类型最大整数（32767）更大的整数（65618）。
    这次，计算机也进行了求模运算。在本系统中，应把数字65618储存为4字节的int类型值。
    用%hd转换说明打印时，printf()只使用最后2个字节。
    这相当于65618除以65536的余数。这里，余数是82。
    鉴于负数的储存方法，如果余数在32767～65536范围内会被打印成负数。
    */
    printf("WORDS as int, short and char: %d, %hd, %c\n", WORDS, WORDS, WORDS);
    
    return 0;
}

