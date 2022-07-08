#include<bits/stdc++.h>
using namespace std;
//      *
//       *
//        *
//         *
//          *
// ***********
//          *
//         *
//        *
//       *
//      *
int main(){
    int n = 11;
    int m = 6;
    for(int i=0; i<n;i++){
        for(int j =0;j<m;j++){
            if(j == m-1 || i == n/2 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
        if(i<n/2){
            m++;
        }
        else{
            m--;
        }
    }
}