#include<bits/stdc++.h>
using namespace std;
// *   *
//  * *
//   *  
//  * *
// *   *
int main(){
    int n = 5;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){   
            
            if(i+j == n-1 || i == j){    
                cout<<"*";
            }                          
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}