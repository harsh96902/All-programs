#include<stdio.h>
#include<string.h>

struct employee {   
    int code;       //This is the declaration of structure
    float salary;
    char name[10];

};
int main(){
    int i;
    struct employee e1,e2,e3;
        // strcpy(e[i].name,s);    
    printf("Enter the name of e1 : ");
    scanf("%s",e1.name);
    printf("Enter the salary of e1 : ");
    scanf("%f",&e1.salary);
    printf("Enter the code of e1 : ");
    scanf("%d",&e1.code);

    printf("Enter the name of e2 : ");
    scanf("%s",e2.name);
    printf("Enter the salary of e2 : ");
    scanf("%f",&e2.salary);
    printf("Enter the code of e2 : ");
    scanf("%d",&e2.code);

    printf("Enter the name of e3 : ");
    scanf("%s",e3.name);
    printf("Enter the salary of e3 : ");
    scanf("%f",&e3.salary);
    printf("Enter the code of e3 : ");
    scanf("%d",&e3.code);
            
    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    printf("%.3f\n",e1.salary); // we can use this according to our requirement
    
    printf("%d\n",e2.code);
    printf("%s\n",e2.name);
    printf("%.3f\n",e2.salary);

    printf("%d\n",e3.code);
    printf("%s\n",e3.name);
    printf("%.3f\n",e3.salary);
    
    return 0;
}