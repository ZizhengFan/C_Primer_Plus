/*
 * 注意分号的位置
 */

#include <stdio.h>

int main(){
    int n = 0;
    
    while(n++ < 3);
    printf("n is %d\n", n);
    printf("That's all.\n");
    
    
    return 0;
}
