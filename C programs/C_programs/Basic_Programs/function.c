// Function is a block code which perform a prticular task
// Function is of two types : Library functions and user defined functions
#include<stdio.h>
void display();  // Function prototype  (display is the name given to any function)
int main(){
    int a;
    printf("This one is first\n");
    display();    // Function call  (This is used for the function call)
//   (we can use it anywhere inside the main function)
    printf("This one is last\n");
    return 0;
}
void display(){       // Function definition  (Define any task inside this)
    printf("This one is second\n");
}