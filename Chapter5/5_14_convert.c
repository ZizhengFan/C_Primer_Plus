/*
 * 自动类型转换
 */

#include <stdio.h>

int main(){
    char ch;
    int i;
    float fl;
    
    fl = i = ch = 'C';

    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    
    //此时发生了什么？！ 为了+1，ch的值67被解释为int，加一变成68，储存在四个字节的临时空间
    //为了将4字节的ch赋值给1字节的ch，发生了截断，只有第一个字节的68存入ch中
    ch = ch + 1;
    //68*2=136，为了和float类型的fl相加，136被解释为float，结果为203.00。
    // 为了将该float赋值给int类型的i，小数点被截断
    i = fl + 2 * ch;
    //计算结果被转化成浮点数
    fl = 2.0 * ch + i;
    
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    
    ch = 1107;
    printf("Now ch = %c\n", ch);
    
    ch = 80.89;
    printf("Now ch = %c\n", ch);
    printf("%d\n", 'P');
    
    int a, b;
    
    a = 1.6 + 1.7;
    b = (int)1.6 + (int)1.7;

    printf("a = %d, b = %d\n", a, b);
    
    
    
    return 0;
}
