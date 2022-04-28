/**
 * @file 1.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <math.h>

int main(){
    
    //整数overflow
    int a = pow(2, 31) - 1;
    printf("a = %d\n", a+1);

    //浮点数overflow
    float b = 3.4e38;
    printf("b = %f\n", b*10);

    //浮点数underflow
    float c = 0.1234e-10;
    printf("c = %.5f\n", c/10);
    
    return 0;
}