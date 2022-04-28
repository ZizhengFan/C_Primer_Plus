/**
 * @file 6.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 编写一个程序，创建一个整型变量toes，并将toes设置为10
 * 程序中还要计算toes的两倍和toes的平方
 * 该程序应打印3个值，并分别描述以示区分
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    int toes = 10;
    printf("toes = %d\n", toes);
    printf("toes * 2 = %d\n", toes*2);
    printf("toes ^ 2 = %d\n", toes^2);
    
    return 0;
}