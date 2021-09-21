#include<stdio.h>
    // String is a character array
int main(){
    char str[]={'H','A','R','S','H','\0'}; 
    //\0 is important to stop the loop otherwise it will go outside the memory bond   
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;

    }
    // for(int i=0;i<5;i++){         
    // printf("%c",str[i]);

    // }
    return 0;
}