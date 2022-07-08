#include<bits/stdc++.h>
using namespace std;
//     1
//    2 2
//   3   3
//  4     4
// 5       5
int main(){
    int n = 5;
    int m = n;
    int z = 1;
    int spac  = n -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                if(j==spac || j == m-1){
                    cout<<z;
                }
                else{
                    cout<<" ";
                }
            }            
        }
        z++;
        spac--;
        m++;
        cout<<"\n";
    }
}