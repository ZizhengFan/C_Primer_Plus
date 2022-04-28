/**
 * @file 3_4_print2.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    //unsigned int表示的正整数比int多，因此用int格式强行输出unsigned int会出现负数
    printf("un = %u and not %d\n", un, un);
    //short（16位）本身存储的值就比int少，但200还是够的，因此用int输出也是合理的
    printf("end = %hd and not %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    
    return 0;
}