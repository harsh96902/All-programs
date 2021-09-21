#include<stdio.h>
//   gets() is a function which is used to receive multi words string
// Then we can use gets() in place of scanf()
//   Likewise puts()  can be used to output multi words
// So, we can use puts() in place of printf()
int main(){
    char s[54];
    printf("Enter your name :");
    gets(s);
    puts(s);
    return 0;
}