#include<bits/stdc++.h>
using namespace std;
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
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
                cout<<z;
                if(j > n-2){
                    z--;
                }
                else{
                    z++;
                }
            }            
        }
        z = 'A';
        spac--;
        m++;
        cout<<"\n";
    }
}