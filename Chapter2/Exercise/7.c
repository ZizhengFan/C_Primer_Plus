/**
 * @file 7.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 该程序要定义一个函数，该函数被调用一次打印一次“Smile!”
 * 根据程序的需要使用该函数。
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void smile(void);

int main(){
    int i;
    int j;

    for(i=3; i>=1; i--){
        for(j=0; j<i; j++){
            smile();
        }
        printf("\n");
    }
    
    return 0;
}


void smile(void){
    printf("Smile!");
}