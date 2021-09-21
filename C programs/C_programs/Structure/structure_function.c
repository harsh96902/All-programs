#include<stdio.h>
struct employee{
    int code;
    float salary;

};
void show(struct employee emp){
    printf("code is %d",emp.code);
    }

int main(){
    struct employee e1;
    e1.code = 134;
    show(e1);
    // printf("code is %d",e1.code);
    
    return 0;
}