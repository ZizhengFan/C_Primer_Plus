/**
 * @file 3_7_showf_pt.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 以两种方式显示float类型的值
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    //the highest value of float type is 3.4e38
    float toobig = 3.4e38 * 100.0f;

    printf("The size of float, double and long double are: %lu, %lu and %lu Bytes\n", sizeof(aboat), sizeof(abet), sizeof(dip));
    printf("%f can be written %e\n", aboat, aboat);

    printf("And it's %a in hex, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);
    printf("too big is %e\n", toobig);

    return 0;
}