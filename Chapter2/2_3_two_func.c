#include <stdio.h>

//函数原型prototype，用于告知编译器在本程序中将要使用该函数
void butler(void);

int main(){
    printf("I will summon the butler function.\n");

    butler();

    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}


void butler(){
    printf("You rang sir?\n");
}