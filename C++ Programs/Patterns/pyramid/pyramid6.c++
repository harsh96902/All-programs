#include<bits/stdc++.h>
using namespace std;
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *
int main(){
    int n = 5;
    for(int i = 0;i<n-1;i++){
        for(int j =0;j<n;j++){
            if(i+j >= n-1)
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<"\n";
    }
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i-j <= 0)
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<"\n";
    }

}



// int main(){
//     int n = 5;
//     int x =0;
//     for(int i = 0;i<2*n;i++){
//         for(int j = 0;j<n;j++){
//             if(i == n-1){
//                 x = 0;
//             }
//             if(i>n){
//                 if(x-j <= 0){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 if( x + j >= n-1){  
//                     cout<<"*";        
//                 }                
//                 else{
//                     cout<<" ";
//                 }
//             }             
            
//         }
//         x++;
//         cout<<"\n";
//     }
// }