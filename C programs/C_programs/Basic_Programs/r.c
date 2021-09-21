#include<stdio.h>

int main(){
    int a , b , c , T;
    // printf("Enter any num");
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&a,&b);
        
        c = a%b;
        printf("%d\n",c);
    }
    return 0;
}
