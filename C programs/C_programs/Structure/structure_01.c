#include<stdio.h>
#include<string.h>
//  As we know that string and array can hold only similar data
// like only character and only integer.
// Structure can hold dissimilar data
// Definition:-- A structure in c is a collection of different type variable 
// under a single name. 
struct employee {   
    int code;       //This is the declaration of structure
    float salary;
    char name[10];w

};
int main(){
    struct employee e1;
    e1.code=507;
    e1.salary=68687.868;
// e1.name="Harsh";// remember that this  will not work directly we have to 
                           // use strcpy() function
    strcpy(e1.name,"Harsh");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary); // we can use this according to our requirement 
    // that  how much digit we need to print after decimal .
    printf("%s\n",e1.name);

    return 0;
}