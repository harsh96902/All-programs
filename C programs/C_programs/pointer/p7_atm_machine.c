#include<stdio.h>

int main(){
    int n,t,a;
    printf("Enter the total amount in the ATM: ");
    scanf("%d",&n);
    printf("No. of people want to withdraw money: ");
    scanf("%d",&t);
    int money = n;
    while(t--){
        printf("Available balance: %d\n",money);
        printf("How much amount you want to withdraw : ");
        scanf("%d",&a);
        if(money >= a){
            money = money - a;
            // printf("1\n");
            printf("Congratulation Withdraw Successful \n");
        }
        else{
            printf("Sorry not enough money \n");
            // printf("0\n");        
        }
    }
    return 0;
}