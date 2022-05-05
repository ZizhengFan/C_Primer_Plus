/*
 * 用一个循环计算矩形的面积。如果用户输入非数字作为矩形的长或宽，则终止循环
 */

#include <stdio.h>

int main(void){
    double length, width;
    double area;
    
    printf("Enter double: ");
    
    while((scanf("%lf", &length)) == 1){
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        
        if (scanf("%lf", &width) != 1)
            break;
        
        printf("Width = %0.2f:\n", width);
        
        area = length * width;
        printf("Area = %0.2f:\n", area);
        printf("Enter the length of the rectangle:\n");
    }
    
    printf("Done.\n");
    
    return 0;
}
