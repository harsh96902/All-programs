#include<bits/stdc++.h>
using namespace std;
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********
int main(){
    int n = 5;
    int x = 1;
    int m = 2*n - 1;
    int spac  = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        spac++;
        m--;
        cout<<"\n";
    }

    m = n;
    spac  = n -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        spac--;
        m++;
        cout<<"\n";
    }
}