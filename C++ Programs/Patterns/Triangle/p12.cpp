#include<bits/stdc++.h>
using namespace std;
// Left Pascal Triangle-->
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
int main(){
    int n = 9;
    int m = 0;
    for(int i =0;i<9;i++){
        for(int j= 0;j<m+1;j++){
            cout<<"*";
        }
        cout<<"\n";
        if(i < n/2){
            m++;
        }
        else{
            m--;
        }
    }
}