/*
 * 
 */

#include <stdio.h>

int main(){
    const int secret_code = 13;
    int code_entered;
    
    do{
        printf("Enter an int num: ");
        scanf("%d", &code_entered);
    }while(code_entered != secret_code);
    
    printf("Congrate!\n");
    
    return 0;
}
