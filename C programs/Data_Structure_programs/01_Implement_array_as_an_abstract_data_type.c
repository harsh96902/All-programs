#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;     //we can use {  (*a). = a->  }
    (*a).ptr= (int *)malloc(tsize * sizeof(int));
// In C, the library function malloc is used to allocate a block of memory
// on the heap(Dynamic memory). The program accesses this block of memory via a pointer that
// malloc returns. When the memory is no longer needed, the pointer is passed
// to free which deallocates the memory so that it can be used for other purposes.

}
void setVal(struct myArray *a){
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("Enter elements %d : ",i+1);
        scanf("%d",&((*a).ptr)[i]);
    }
    }
void show(struct myArray *a){
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("%d \n",((*a).ptr)[i]);
    }
    }

int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    setVal(&marks);
    show(&marks);

    return 0;
}