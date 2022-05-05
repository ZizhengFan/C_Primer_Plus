/*
 * 浮点数比较
 *
 * 虽然关系运算符也可用来比较浮点数，但是要注意：比较浮点数时，尽 量只使用<和>。
 * 使用fabs()函数（声明在math.h头文件中） 可以方便地比较浮点数，该函数返回一个浮点值的绝对值
 */

#include <stdio.h>
#include <math.h>

int main(){
    const double ANSWER = 3.14159;
    double response;
    
    printf("What is the value of pi? -> ");
    scanf("%lf", &response);
    
    while(fabs(response - ANSWER) > 0.0001){
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    
    printf("Close enough!\n");
    
    return 0;
}
