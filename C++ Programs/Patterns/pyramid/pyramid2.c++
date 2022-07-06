#include<bits/stdc++.h>
using namespace std;
//     0 
//    0 1 2
//   0 1 2 3 4
//  0 1 2 3 4 5 6
// 0 1 2 3 4 5 6 7 8
int main(){
    int n = 5;
    int x = 1;
    int m = n;
    int z =0;
    int spac  = n -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<z<<" ";
                z++;
            }
        }
        z = 0;
        spac--;
        m++;
        cout<<"\n";
    }
}