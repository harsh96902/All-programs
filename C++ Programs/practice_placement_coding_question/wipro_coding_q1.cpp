#include<iostream>
using namespace std;
int checkPerfectSquare(int x,int y){
    int sum =0;
    for(int i=x; i<=y;i++){
        for(int j=1;j<i;j++){
            if(j*j == i){
                // cout<<i<<" ";
                sum += i;
            }
        }
    }
    return sum;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<checkPerfectSquare(a,b);
}