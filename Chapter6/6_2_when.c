/*
 * 何时退出循环
 */

#include <stdio.h>

int main(){
    int n = 5;
    
    while(n < 7){
        printf("    n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    
    return 0;
}
