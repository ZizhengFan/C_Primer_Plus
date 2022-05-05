/*
 * 
 */

#include <stdio.h>

int main(){
    int num;
    
    printf("n   n cubed\n");
    printf("----------------\n");
    
    for(num=1; num<=6; num++){
        printf("%-3d   %-3d\n", num, num*num*num);
    }
    
    
    
    return 0;
}
