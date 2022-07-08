#include<bits/stdc++.h>
using namespace std;
// *********
// **** ****
// ***   ***
// **     **
// *       *
int main(){
    int n = 6;
    int m = n;
    int spac  = n -1;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<2*n-2;j++){                
            if(j < spac || j>=m-1){
                cout<<"*";
            }
            else{
                if(j != n-1)
                    cout<<" ";
            }
        }
        spac--;
        m++;
        cout<<"\n";
    }
}