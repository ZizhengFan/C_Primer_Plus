/*
 * 指数增长
 * 该程序以谷粒数为单位，把计算的小麦总数与粗略估计的世界小麦年产量进行了比较。
 */

#include <stdio.h>

#define SQUARES 64 //the number of squares on a chessboard

int main(){
    const double CROP = 2e16; //the number of wheats in the world per year
    double current, total;
    current = total = 1.0;
    
    int count = 1;
//    printf("square grains total ");
//    printf("fraction of \n");
//    printf("added grains ");
//    printf("world total\n");

    while(count<=SQUARES){
        current = 2.0 * current;
        total = total + current;
//        count++;
    
        printf("%4d %.2ef %.2ef %.2ef\n", count, current, total, total/CROP);
        count++;
    }
    
    return 0;
}
