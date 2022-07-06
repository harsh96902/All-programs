#include<bits/stdc++.h>
using namespace std;
int wt[105] = {3,4,5};
int val[105] = {30,50,60};
long long dp[105][100005]; 
long long func(int ind , int wt_left){
    if(ind < 0)return 0;
    
    if(wt_left == 0)return 0;
    if(dp[ind][wt_left] != -1) return dp[ind][wt_left];
    // if don't choose the wt at ind
    long long ans = func(ind - 1,wt_left);
    // choose the wt at ind
    if(wt_left - wt[ind] >= 0){
        ans = max(ans , func(ind -1,wt_left - wt[ind]) + val[ind]);
    }
    return dp[ind][wt_left] = ans;
}
int main(){
    memset(dp , -1 , sizeof(dp));
    int n =3 , w = 8;
    cout<<func(n-1,w);
}