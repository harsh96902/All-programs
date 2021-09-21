#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n,guessing,chances=1;
    srand(time(0));
    guessing = rand()%100 + 1;  // for generating random no. between 1 to 100
    printf("Guess any number : ");
    while(n!=guessing)
    {
        scanf("%d",&n);
    
        if(n<guessing)
        {
            printf("Enter the greatest num : \n");
            printf("No. of chances =%d\n",chances);
        }
        else if(n>guessing)
        {
            printf("Enter the smallest num : \n");
            printf("No. of chances =%d\n",chances);

        }
        else
        {
            printf("You  won");
        }
        chances++;
    }


    return 0;
}