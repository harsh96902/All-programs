#include<bits/stdc++.h>
using namespace std;
// **
// **
// ****
// ****
// ******
// ******
int main(){
    int n = 6;
    int m = 2;
    for(int i =0;i<n;i++){
        if(i%2 == 0 && i != 0){
            m +=2;
        }
        for(int j =0;j<m;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}