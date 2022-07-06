#include<bits/stdc++.h>
using namespace std;
// Left pascal triangle-->>
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// Logic 1 -->>
// int main(){
//     int n =5;
//     int i = 1;
//     int m = 1;
//     while(i != 0){
//         if(m > n){
//             if(i == n+1){
//                 i--;
//             }
//             for(int x = i-1;x>0;x--){
//                 cout<<"*";
//             }
//             cout<<"\n";
//             i--;
//         }
//         else{
//             for(int z =0;z<i;z++){
//                 cout<<"*";
//             }
//             cout<<"\n";
//             i++;
//         }
//         m++;
//     }
// }

// Logic 2 --->>
int main(){
    int n = 5;
    for(int i = 0;i<n-1;i++){
        for(int j =0;j<n;j++){
            if(i-j >= 0)
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<"\n";
    }
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i+j <= n-1)
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<"\n";
    }

}