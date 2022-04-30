/*
 * 定义一个带一个参数的函数
 * pound()函数，打印指定数量的#号
 */

#include <stdio.h>


void pound(int n);

int main(){
    int times = 5;
    char ch = '!';
    float f = 6.0f;
    
    pound(times);
    pound(ch);
    pound(f);
    
    return 0;
}


void pound(int n){
    while(n-- > 0){
        printf("#");
    }
    printf("\n");
}