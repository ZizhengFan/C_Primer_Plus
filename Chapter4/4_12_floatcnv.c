/**
 * @file 4_12_floatcnv.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 不匹配的浮点型转换
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void){
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    /*
    该调用告诉计算机把变量n1、n2、、n3和n4的值传递给程序。
    这是一种常见的参数传递方式。程序把传入的值放入被称为栈（stack）的内存区域。
    n1被储存在栈中，占8字节（float类型被转换成double类型）。
    同样，n2也在栈中占8字节，
    而n3和n4在栈中分别占4字节。
    控制转到printf()函数。该函数根据转换说明（不是根据变量类型）从栈中读取值。
    %ld转换说明表明printf()应该读取4字节，所以printf()读取栈中的前4字节作为第1个值
    之后就开始出错。。。一错到底
    */
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    
    return 0;
}