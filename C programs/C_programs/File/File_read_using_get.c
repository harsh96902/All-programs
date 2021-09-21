#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("file2.txt","r");
    c = fgetc(ptr);
    // printf("%c",c);   //this is for printing first character only
    if(ptr == NULL){
        printf("File does not exist");
    }
    while(c!=EOF){    // EOF means End Of File 
        printf("%c",c);  // this  loop is used for printing character by charater
        c = fgetc(ptr);
    }
    return 0;
}