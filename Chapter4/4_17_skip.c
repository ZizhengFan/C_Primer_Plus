/**
 * @file 4_17_skip.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 跳过输入中的前两个整数
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void){
    int n;
    printf("Please enter three integers:\n");
    //! 把*放在%和转换字符之间时，会使得 scanf()跳过相应的输出项
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);
    
    return 0;
}