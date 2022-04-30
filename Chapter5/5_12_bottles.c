/*
 * 
 */

#include <stdio.h>

#define MAX 100

int main(){
    int count = MAX + 1;
    
    while(--count>0){
        printf("%d bottles of spring water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count-1);
        
    }
    
    
    int y = 2, n = 3;
    int nextnum;
    
    //先使用n，再递增n
    printf("%d, %d", (y + n++) * 6, n);
    
    return 0;
}
