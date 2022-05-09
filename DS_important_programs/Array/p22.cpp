#include<bits/stdc++.h>
using namespace std;

int main(){
    int N , C;
    cin>>N;
    cin>>C;
    int A[N];
    for(int i=0;i<N-1;i++){
        cin>>A[i];
    }
    int min =A[0];
    for(int j = 0; j < N-1; j++){
        if(A[j] < min){
            min = A[j];
        }
    }
    int min2 = A[0];
    for(int k = 0; k < N-1; k++){
        if(A[k] < min2 && A[k]!=min){
            min2 = A[j];
        }
    }
    int f_min = min + min2;
    
    int max = A[0];
    for(int j = 0; j < N-1; j++){
        if(A[j] > max){
            max = A[j];
        }
    }
    int max2 = A[0];
    for(int j = 0; j < N-1; j++){
        if(A[j] < max2 && A[j]!= max ){
            max2 = A[j];
        }