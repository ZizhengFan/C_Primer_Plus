/*
 * 使用条件运算符
 *
 * 油漆程序
 *
 * 该程序计算刷给定平方英尺的面积需要多少罐油漆。基本算法很简单：
 * 用平方英尺数除以每罐油漆能刷的面积。但是，商店只卖整罐油漆，不会拆分来卖，
 * 所以如果计算结果是1.7罐，就需要两罐。
 * 因此，该程序计算得到带小数的结果时应该进1。
 * 条件运算符常用于处理这种情况，而且还要根据单复数分别打印can和cans。
 */

#include <stdio.h>

#define COVERAGE 350

int main(void){
    int sq_feet;
    int cans;
    
    printf("Enter: \n");
    
    while(scanf("%d", &sq_feet) == 1){
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);
    
        printf("You need %d %s of paint.\n", cans, (cans > 1) ? "cans" : "can");
    }
    
    return 0;
}
