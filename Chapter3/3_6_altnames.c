/**
 * @file 3_6_altnames.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 演示了一种可移植类型和相应转换说明的用法
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <inttypes.h>

int main(){
    int32_t me32;
    me32 = 45933945;

    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);

    printf("Next, Let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);
    
    return 0;
}