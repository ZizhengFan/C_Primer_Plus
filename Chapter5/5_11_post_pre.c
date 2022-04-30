/*
 * 前缀和后缀
 */

#include <stdio.h>

int main(){
    int a = 1, b = 1;
    int a_post, pre_b;
    
    //a_post = a = 1, then a++(a=2)
    a_post =  a++;
    //++b(b=2), pre_b = 2
    pre_b = ++b;
    
    printf("%1d　%5d　%5d　%5d\n", a, a_post, b, pre_b);
    
    return 0;
}
