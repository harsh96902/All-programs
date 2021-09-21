#include<stdio.h>
#include<math.h>  // Library function
int main(){
    int side;
    printf("Enter the side of the square :");
    scanf("%d",&side);

    printf("Area of the square is : %d",pow(side,2));

    return 0;
}