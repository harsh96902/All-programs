#include<stdio.h>

int main(){
    int num=13;   // This is  how we can write inside any file
    FILE *ptr;
    ptr = fopen("file1.txt","w");
    fprintf(ptr,"Hello Guys How are you My lottery no. is %d",num);
    putc('h',ptr);
    fclose(ptr);
    return 0;
}