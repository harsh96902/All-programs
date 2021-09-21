#include<stdio.h>
#include<stdlib.h>  //for generating random number
#include<time.h>
int main(){
    int num;
    srand(time(0));
    num = rand()%100 + 1;  // random number between 1 to 100
    printf("Random number : %d",num);
    return 0;
}