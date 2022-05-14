/*
 * 指针和字符串
 */

#include <stdio.h>

int main(void){
    const char *mesg = "Don't be a fool!";
    const char *copy;
    
    // 此处实际上并未"拷贝"字符串
    // 而是将指针copy和指针mesg都指向了内存中同一个"Don't be a fool!"
    copy = mesg;
    
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n",
           mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n",
           copy, &copy, copy);
    
    
    return 0;
}
