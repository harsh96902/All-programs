#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int dp[10010];
    int func(vector<int>& n,int t){
        if(t == 0) return 0;
        if(dp[t] != -1)  return dp[t];
        int ans = INT_MAX;
        for(int coin : n){
            if(t - coin >= 0){
                ans = min(ans + 0LL , func(n,t - coin) + 1LL);
            }
        }
        return dp[t] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        // if(amount == 0){
        //     return 0;
        // }
        memset(dp , -1 , sizeof(dp));
        int ans = func(coins , amount);
        return ans == INT_MAX ? -1 : ans;
        // for(int i = 0; i<coins.size();i++){
            // if(amount - coins[i] < 0){
            //     return 0 - 1;
            // }
            // if((amount - coins[i]) >= 0){
                // ans = min(ans + 0LL, coinChange(coins , amount - coins[i]) + 1LL);
                
                // if(subAns != INT_MAX && subAns + 1LL < ans){
                //     ans + 0LL = subAns + 1LL;
                // }

            // }
        // }
        // cout<<ans<<" ";
        // return ans == INT_MAX ? -1 : ans;
    }
};
int main(){
    int amount = 11;
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(5);
    Solution s;

    cout<<s.coinChange(vect,amount);
}