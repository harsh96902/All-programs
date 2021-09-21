#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];

};
int main(){
    struct employee e[10];  // remember this array declaration
    for(int i=0;i<5;i++){
        printf("Enter the code for employee %d : ",i+1);
        scanf("%d",&e[i].code);

        printf("Enter the salary for employee %d : ",i+1);
        scanf("%f",&e[i].salary);

        printf("Enter the name for employee %d : ",i+1);
        scanf("%s",e[i].name);
        printf("\n");
    }

    for(int i=0;i<5;i++){
        printf("You have entered the name for employee %d is : %s\n",i+1,e[i].name);
        printf("You have entered the code for employee %d is : %d\n",i+1,e[i].code);
        printf("You have entered the salary for employee %d is : %f\n",i+1,e[i].salary);
    }
    
    return 0;
}