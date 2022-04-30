/*
 * 演示除法
 * 运行程序清单5.6中的程序，看看截断的情况，体会整数除法和浮点数除法的区别。
 */

#include <stdio.h>

int main(){
    //注意，整数除法会截断计算结果的小数部分
    printf("integer division: 5/4 is %d\n", 5/4);
    printf("integer division: 6/3 is %d\n", 6/3);
    printf("integer division: 7/4 is %d\n", 7/4);
    
    printf("float division 7./4. is %1.2f\n", 7./4.);
    //混合整数和浮点数计算的结果是浮点数
    printf("mixed division 7./4 is %1.2f\n", 7./4);
    
    return 0;
}
