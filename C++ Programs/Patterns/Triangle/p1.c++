#include<bits/stdc++.h>
using namespace std;
// *
//  *
//   *
//    *
//     *

// or

//     *     
//    *
//   *
//  *
// *

int main(){
    int n = 5;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){        
            // if(i == j){     // for printing diagonal     
                // cout<<"*";           
            // }        
            if( i + j == n -1 || i == j){     // for anti-diagonal
                cout<<"*";        
            }                
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}