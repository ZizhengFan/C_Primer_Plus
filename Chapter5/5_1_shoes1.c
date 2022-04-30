/**
 * 把鞋码转换成英寸
 * 程序清单5.1是一个简单的程序示例，该程序进行了简单的运算，
 * 计算穿9码男鞋的脚长（单位：英寸）。为了让读者体会循环的好处，
 * 程序的第1个版本演示了不使用循环编程的局限性。
 */

#include <stdio.h>

#define ADJUST 7.31

int main(){
    const double SCALE = 0.333;
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
    
    return 0;
}
