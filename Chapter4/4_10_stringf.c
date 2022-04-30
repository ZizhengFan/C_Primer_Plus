/**
 * @file 4_10_stringf.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 字符串格式
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#define BLURB "Authentic imitation"

int main(void){
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    
    return 0;
}