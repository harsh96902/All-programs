#include<bits/stdc++.h>
using namespace std;
// *****
// ****
// ***
// **
// *
// OR
//     *
//    **
//   ***
//  ****
// *****

int main(){
    int n = 5;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){   
            
            // if(i + j <= n-1){      
                // cout<<"*";
            // }                
            if(i+j >= n-1){
                cout<<"*";
            }          
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}