#include<iostream>
#include<string>
using namespace std;
int main(){
    // char a[] = "jkabbabbakj";
    string a = "baaajihkggaaab";
    int x = a.length();
    int m = x-1,n=0;
    int flag =0;
    cout<<x<<endl;
    while(m!=n){
        if(a[m] != a[n]){
            cout<<0;
            flag = 1;
            break;
        }
        m--;
        n++;
    }
    if(flag==0){
        cout<<1;
    }
}