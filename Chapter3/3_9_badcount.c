/**
 * @file 3_9_badcount.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 参数错误的情况
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * C语言通过函数原型机制，检查函数调用时参数的个数和类型是否正确
 * ！但是，该机制对printf()和scanf()不起作用
 * 因为这两个函数的参数个数可变。如果参数在匹配上有问题，会出现什么情况？
 */

#include <stdio.h>

int main(){
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("too many args: %d\n", n, m);
    printf("too few args: %d, %d, %d\n", n, m);

    //用%d显示float的内容，居然不会截断整数位！！！焯！
    printf("args not match: %d, %d\n", f, g);
    
    return 0;
}