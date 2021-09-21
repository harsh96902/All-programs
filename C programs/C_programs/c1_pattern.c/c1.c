#include<stdio.h>
// A 
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F
// G G G G G G G
// #include<string.h>                            
int main(){
    char a = 'A';
    int n = 0;
    for(int i='A';i<='G';i++){
        n++;
        for(int j=1;j<=n;j++){
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}