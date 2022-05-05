/*
 * 逗号运算符
 * 一类邮资
 * 在撰写本书时，邮资为首重40美分/盎司，续重20美分/盎司，可以在互联网上查看当前邮资
 */

#include <stdio.h>

int main(){
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    
    int ounces, cost;
    printf("ounces cost\n");
    
    for(ounces = 1, cost = FIRST_OZ; ounces<=16; ounces++, cost+= NEXT_OZ){
        printf("%d      $%4.2f\n", ounces, cost/100.0);
    }
    
    return 0;
}
