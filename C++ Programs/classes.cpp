#include<iostream>
using namespace std;
class info{
public:
    void employee(int salary,int ref_no, int age){
        cout<<salary<<" "<<ref_no<<" "<<age<<endl;
    }

};
int main(){
    info e1 , e2 ,e3;
    e1.employee(10000,49,24);

    e2.employee(14000, 395,26);

    e3.employee(16000,344,28);
}