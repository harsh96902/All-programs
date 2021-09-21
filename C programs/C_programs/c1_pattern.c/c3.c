#include<stdio.h>
// A 
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U

int main(){
    char a = 'A';
    for(int i=1;i<=6;i++){
        for(int j = 1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}