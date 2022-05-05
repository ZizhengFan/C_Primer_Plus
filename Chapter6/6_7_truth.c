/*
 * 哪些值为真
 * 一般而言，所有的非零值都视为真，只有0被视为假
 * 这代码看起来有问题
 */

#include <stdio.h>

int main(){
    int n = 3;
    
    while(n){
        printf("%2d is true\n", n--);
        printf("%2d is false\n", n);
        
    }
    
    return 0;
}
