/*
 * 更改输入，空格不变
 */

#include <stdio.h>

#define SPACE ' '

int main(){
    int ch;
    ch = getchar();
    
    while((ch = getchar()) != '\n'){
        if(ch == SPACE){
            putchar(ch);
        }else{
            putchar(ch+1);
        }

//        ch = getchar();
    }

    putchar(ch);
    
    return 0;
}
