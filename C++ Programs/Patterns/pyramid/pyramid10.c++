#include<bits/stdc++.h>
using namespace std;
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
int main(){
    int n =5;
    int m = n;
    int spac  = n -1;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                if(j == spac || j == m-1 ){  // using this condition
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        // cout<<"  m = "<<m;
        spac--;
        m++;
        cout<<"\n";
    }

    m = 2*n - 1;
    spac  = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                if(j == spac || j == m-1 ){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        spac++;
        m--;
        cout<<"\n";
    }
}