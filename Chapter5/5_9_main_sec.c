/*
 * 把秒数转换成分和秒
 */

#include <stdio.h>

#define SEC_PER_MIN 60

int main(){
    int sec, min, left;
    
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds here: ");
    scanf("%d", &sec);
    
    while(sec>0){
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
    
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value: ");
        scanf("%d", &sec);
        
        if(sec==-1){
            printf("Quit!");
            return -1;
        }
    }
    
//    printf("Quit!\n");
    
    
    return 0;
}
