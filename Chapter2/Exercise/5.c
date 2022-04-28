/**
 * @file 5.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief define two functions and call them
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void br(void);
void ic(void);

int main(){
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");
    
    return 0;
}


void br(void){
    printf("Brazil, Russia");
}


void ic(void){
    printf("India, China");
}