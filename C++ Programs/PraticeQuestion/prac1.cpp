#include<bits/stdc++.h>
using namespace std;
string n;
int m;

class FillForm{
    public:
    void form(){    
        cout<<"Enter Your Name: ";
        cin>>n;
        cout<<"Enter your Roll.no: ";
        cin>>m;
    }
};

int main(){
    FillForm f1,f2;
    f1.form();
    cout<<n<<" "<<m<<"\n";
    f2.form();
    cout<<n<<" "<<m<<"\n";

}