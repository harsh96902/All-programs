#include<iostream>
#include<string>
using namespace std;
// void traverse(int Arr[]){
//     int k = sizeof(Arr)/sizeof(Arr[0]);
//     for(int i =0;i>k;i++){
//         cout<<Arr[i]<<" ";
//     }
// }
void intToArray(int n){
    string s = "";
    
    s += to_string(n);
    int size = s.size();
    int A[size];
    for(int i=0;i<s.size();i++){
        string str = ""; 
        str += s[i];
        A[i] = stoi(str);
        // cout<<s[i]<<" ";
    }
    for(int i =0;i<s.size();i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int num;
    cin>>num;
    intToArray(num);
    // traverse(A);
}