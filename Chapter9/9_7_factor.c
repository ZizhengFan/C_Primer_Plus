/*
 * 分别用循环和尾递归计算阶乘
 *
 *
 */

#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void){
    
    printf("%ld", rfact(4));
    
    return 0;
}


long fact(int n){
    long ans = 1;
    
    for(; n>0; n--){
        ans *= n;
    }
    
    return ans;
}


long rfact(int n){
    long ans = 1;
    
    if(n > 0){
        ans = n * rfact(n - 1);
    }else{
        ans = 1;
    }
    
    return ans;
}