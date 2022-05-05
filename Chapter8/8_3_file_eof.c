/*
 * stream输出和输入重定向
 * > output
 * < input
 */

#include <stdio.h>

int main(void){
    int ch;
    FILE * fp;
    char fname[50];         // to hold the file name
    
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); // open file for reading
    if (fp == NULL){
        printf("Failed to open file. Bye\n");
        exit(1);            // quit program
    }
    // getc(fp) gets a character from the open file
    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }
    fclose(fp);             // close the file
    
    return 0;
}
