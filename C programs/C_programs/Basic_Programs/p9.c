#include<stdio.h>
// int category_of_stu(int marks[20]);
struct students{
    char s_name[20];
    int marks[20];
};
int main(){
    int no_of_stu;
    printf("How manu students are there in the class:\n");
    scanf("%d",&no_of_stu);

    struct students s[10];
    for(int i=0;i<no_of_stu;i++){
        printf("Enter the  name of student%d\n",i+1);
        scanf("%s",s[i].s_name);
        printf("Enter the  marks of student%d\n",i+1);
        scanf("%d",&s[i].marks[i]);
    }
    for(int i=0;i<no_of_stu;i++){
        printf("Marks of %s is %d\n",s[i].s_name,s[i].marks[i]);
    }
    for(int i=0;i<no_of_stu;i++){
        if(s[i].marks[i]>75){
        printf("%s got marks %d and grade is A\n",s[i].s_name,s[i].marks[i]);
        }
    else if(s[i].marks[i]<33){
        printf("%s got marks %d and grade is C\n",s[i].s_name,s[i].marks[i]);
        }
    else{
        printf("%s got marks %d and grade is B\n",s[i].s_name,s[i].marks[i]);
        }
    }

    // for(int i=0;i>no_of_stu;i++){
        // category_of_stu(s[i].marks[i]);
    // }
    // int result=category_of_stu(marks[i]);
    // if(result==1){
        // printf("")
    // }
    return 0;
}
// int category_of_stu(int marks[i]){
    // int i;
    // if(s[i].marks[i]>75){
        // return 1;
        // printf("%s got marks %d and grade is A",s[i].s_name,marks[i]);
    // }
    // else if(s[i].marks[i]<33){
        // return 0;
        // printf("%s got marks %d and grade is C",s[i].s_name,marks[i]);

    // }
    // else{
        // printf("%s got marks %d and grade is B",s[i].s_name,marks[i]);

        // return -1;
    // }
// }
