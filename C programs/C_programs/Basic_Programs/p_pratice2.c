#include<stdio.h>
int main(){
    FILE *p;
    char  a;
    // p = fopen("harry.txt","w");
    // p = fopen("harry.txt","a");
    p = fopen("harry.txt","r");
    // fprintf(p," Harsh");
    a = fgetc(p);
    while(a!=EOF){
        printf("%c",a);
        a = fgetc(p);
    }
    fclose(p);
    return 0;
}