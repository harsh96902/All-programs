#include<stdio.h>
void  printArray(int *ptr,int n){
    for(int i=0;i<n;i++){    //  we can use function definition over here
    printf("Marks for student %d is %d\n",i+1,*ptr);
    ptr++;
    // printf("Marks for student %d is %d\n",i+1,*(ptr+i));
    // We can use (ptr+i) in place of ptr++

    }
}
int main(){
    int marks[]={23,46,35,67,3,6,4,6};
    printArray(marks,8);

    return 0;
}