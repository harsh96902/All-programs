#include<bits/stdc++.h>
using namespace std;
//       ****
//      ****
//     ****
//    ****
//   ****
//  ****
int main(){
    int n= 6;
    int spac = 6;
    int m = 10;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        m--;
        spac--;
        cout<<"\n";
    }
}