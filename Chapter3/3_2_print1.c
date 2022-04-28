/**
 * @file 3_2_print1.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 不给printf格式化输出足够的变量会怎样
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten-two);
    
    printf("Doing it wrong: ");
    /*
     在第二行输出中，第1个%d对应ten的值，
     但是由于没有给后两个%d提供任何值，所以打印出的值是内存中的任意值
    */
    printf("%d minus %d is %d\n", ten);
    
    return 0;
}