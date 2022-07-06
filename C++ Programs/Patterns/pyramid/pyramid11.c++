#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =3;
    int m = n;
    char z = 'A';
    int spac  = n -1;
    for(int i = 0;i<n-1;i++){
        int q = 0;
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<z;
                q++;
                if(q>i){
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
    int q = n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<z;
                // q++;
                if(j>q){
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