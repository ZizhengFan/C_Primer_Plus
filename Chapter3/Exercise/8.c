/**
 * @file 8.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1品脱等于2杯
 * 1杯等于8盎司
 * 1盎司等于2大汤勺
 * 1大汤勺等于3茶勺
 * 编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量
 * 思考对于该程序，为何使用浮点类型比整数类型更合适
 */

#include <stdio.h>

int main(void){
    float cups;

    printf("Enter your cups here: ");
    scanf("%f", &cups);

    float pints, ounces, spoons, teaSpoons;

    pints = 0.5 * cups;
    ounces = 8 * cups;
    spoons = 0.5 * ounces;
    teaSpoons = 3 * spoons;

    printf("Pints: %.1f\n", pints);
    printf("Cups: %.1f\n", cups);
    printf("Ounces: %.1f\n", ounces);
    printf("Spoons: %.1f\n", spoons);
    printf("Tea Spoons: %.1f\n", teaSpoons);
    
    return 0;
}