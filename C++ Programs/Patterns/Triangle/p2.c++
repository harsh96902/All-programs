#include<bits/stdc++.h>
using namespace std;
// *     
// * *
// * * *
// * * * *
// * * * * *

// or

int main(){
    int n = 5;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){   
            // if(i - j >= 0){  // for printing lower triangle pattern               
            //     cout<<"* ";           
            // }
            if(i - j <= 0){     // for printing upper triangle pattern
                cout<<"*";
            }                          
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}