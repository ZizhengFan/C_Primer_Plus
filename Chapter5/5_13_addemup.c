/*
 * 几种常见的语句
 * 声明创建了名称和类型，并为其分配 内存位置
 */

#include <stdio.h>

int main(){
    int count, sum;
    count = 0;
    sum = 0;
    
    while(count++<20){
        sum = sum + count;
        printf("sum = %d\n", sum);
    }
    
    char ch = 'A';
    while(ch<='Z'){
        printf("%c\n", ch);
        ch++;
    }
    
    return 0;
}
