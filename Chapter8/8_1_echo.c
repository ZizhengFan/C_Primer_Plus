/*
 * 
 */

#include <stdio.h>

int main(void){
    char ch = '#';
    char temp = 0;
    
    while((ch = getchar()) != '#'){
        temp = putchar(ch);
    }
    
    return 0;
}
