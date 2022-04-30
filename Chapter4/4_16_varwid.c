/**
 * @file 4_16_varwid.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 使用变宽输出字段
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void){
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter width: \n");
    scanf("%d", &width);

    //可以看到，这里的width类似一个参数，赋值给%*d中的*
    printf("The number is: %*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    //同理，这里的width和precision分别赋值给前面的两个*
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("DONE!\n");
    
    return 0;
}
