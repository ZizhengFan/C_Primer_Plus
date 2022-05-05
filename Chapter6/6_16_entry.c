/*
 * 
 */

#include <stdio.h>

int main(){
    const int secret_code = 13;
    int code_entered;
    printf("Enter: ");
    scanf("%d", &code_entered);
    
    while(code_entered != secret_code){
        printf("Try again: ");
        scanf("%d", &code_entered);
    }
    
    printf("You win!\n");
    
    return 0;
}
