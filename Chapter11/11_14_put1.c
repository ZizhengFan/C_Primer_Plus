/*
 * put1(): 一个类似puts()但是不会自动添加换行符的函数
 * put2(): 实现puts()且返回待输出字符个数的函数
 */

#include <stdio.h>

void put1(const char *string);
int put2(const char *string);

int main(void){
    char *mystring1 = "Oh! My God!!!";
    char *mystring2 = "Oh! Shit!";
    put1(mystring1);
    put1(mystring2);
    putchar('\n');
    putchar('\n');
    put2(mystring1);
    put2(mystring2);
    
    return 0;
}


void put1(const char *string){
    while(*string){ // 当string指向空字符时，*string的值是0，即测试条件为假
        putchar(*(string++));
        // string++;
    }
}


int put2(const char *string){
    int total = 0;
    
    while(*string){ // 当string指向空字符时，*string的值是0，即测试条件为假
        putchar(*(string++));
        total++;
    }
    printf("\n"); // 不统计换行符但是会像puts一样输出换行符
    
    return total;
}
