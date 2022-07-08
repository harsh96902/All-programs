#include<bits/stdc++.h>
using namespace std;
//     *
//    * *
//   *   *
//  *     *
// *       *
int main(){
    int n = 5;
    int m = n;
    char z = 'A';
    int spac  = n -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                if(j==spac || j == m-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }            
        }
        // z = 'A';
        spac--;
        m++;
        cout<<"\n";
    }
}