#include<bits/stdc++.h>
using namespace std;
//   A
//  ABA
// ABCBA
//  ABA
//   A
int main(){
    int n =3;
    int m = n;
    char z = 'A';
    int spac  = n -1;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<z;
                if(j>n-2){   // after mid pos element will be decrease
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

    z = 'A';
    m = 2*n - 1;
    spac  = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<z;
                q++;
                if(j>n-2){  // after mid pos element will be decrease
                    z--;
                }
                else{
                    z++;
                }
            }
        }
        z ='A';
        spac++;
        m--;
        cout<<"\n";
    }
}