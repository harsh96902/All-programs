#include<bits/stdc++.h>
using namespace std;
//     *
//    ***
//   *****
//  *******
// *********
 // Logic 1
// int main(){
//     int n = 5;
//     int x = 1;
//     int spac  = n -1;
//     for(int i = 0;i<n;i++){   // this loop is for line changing
//         for(int j = 0;j<spac;j++){     // this loop is for space maintain
//             cout<<" ";
//         }
//         spac--;
//         for(int k =0;k<x;k++){    // for printing no. of star
//             cout<<"*";
//         }
//         x += 2;
//         cout<<"\n";
//     }
// }

// Logic 2--->(Reducing complexity)
int main(){
    int n = 5;
    int x = 1;
    int m = n;
    int spac  = n -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){                
            if(j < spac){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        spac--;
        m++;
        cout<<"\n";
    }
}