#include<bits/stdc++.h>
using namespace std;
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
int main(){
    int n = 5;
    int x = 1;
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
                z++;
            }
        }
        z = 'A';
        spac--;
        m++;
        cout<<"\n";
    }
}