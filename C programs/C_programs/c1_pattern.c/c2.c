#include<stdio.h>
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F
// A B C D E F G
// A B C D E F G H
// A B C D E F G H I
// A B C D E F G H I J

int main(){
    for(int i=1;i<=10;i++){
        char a = 'A';
        for(int j = 1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}