/*
 * 
 */

#include <stdio.h>
#include <string.h>

#define MSG "Haha! You are a piece of shit!!!"
#define SIZE 20

void fit(char *string, unsigned int size);

int main(void){
    char msg[] = MSG;
    
    printf("The length of MSG is %d\n", (int)strlen(msg));
    
    fit(msg, SIZE);
    
    puts(msg);
    putchar('\n');
    puts(msg+21);
    
    return 0;
}


void fit(char *string, unsigned int size){
    if(strlen(string) > size){
        *(string+size) = '\0';
    }
}