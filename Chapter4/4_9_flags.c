/**
 * @file 4_9_flags.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 演示一些格式标记
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void){
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    
    return 0;
}