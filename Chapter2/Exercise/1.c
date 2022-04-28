/*
*1.编写一个程序，调用一次 printf()函数，把你的姓名打印在一行
*再调 用一次 printf()函数，把你的姓名分别打印在两行
*然后，再调用两次printf() 函数，把你的姓名打印在一行
*/

#include <stdio.h>

int main(){
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav");
    printf("Mahler\n");
    return 0;
}