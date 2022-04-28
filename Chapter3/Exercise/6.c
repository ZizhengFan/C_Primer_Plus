/**
 * @file 6.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 显示水分子的数量
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1个水分子的质量约为3.0×10−23克
 * 1夸脱水大约是950克
 */

#include <stdio.h>

#define QUARTTOGRAM 950
#define WEIGHTOFAWATERMOLECULE 3.0e-23

int main(void){
    float quart;
    double gram;
    long double numberOfWaterMolecule;

    printf("Enter quart here: ");
    scanf("%f", &quart);

    gram = QUARTTOGRAM * quart;
    numberOfWaterMolecule = gram / WEIGHTOFAWATERMOLECULE;

    printf("The number of water molecule will be: %Lf", numberOfWaterMolecule);
    
    return 0;
}
