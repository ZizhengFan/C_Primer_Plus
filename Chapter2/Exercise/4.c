/**
 * @file 4.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 
 * 除了 main()函数以外，该程序还要调用两个自定义函数：
 * 一个名为jolly()，用于打印前3条消息，调用一次打印一条；
 * 另一个函数名为 deny()，打印最后一条消息。
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void jolly(void);
void deny(void);

int main(){
    jolly();
    deny();

    return 0;
}

void jolly(void){
    for(int i=0; i<3; i++){
        printf("For he's a jolly good fellow!\n");
    }
}

void deny(void){
    printf("Which nobody can deny!\n");
}