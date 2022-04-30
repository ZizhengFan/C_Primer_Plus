/**
 * @file 4_13_prntval.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief printf()的返回值
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * printf()函数也有一个返回值，它返回打印字符的个数
 *! 注意：该计算针对所有字符数，包括空格和不可见的换行符（\n）
 * 如果有输出错误， printf()则返回一个负值
 */

#include <stdio.h>

int main(void){
    int bph2o = 212;
    int rv;

    //程序用rv = printf(...);的形式把printf()的返回值赋给rv
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);
    
    return 0;
}