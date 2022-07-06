#include<bits/stdc++.h>
using namespace std;

int ans(vector<int>& nums){
    int fmax = INT_MIN;
    int tmax = 0;
    int len = 0;
    int flen = 0;
    for(int i = 0;i<nums.size();i++){
        tmax += nums[i];
        len++;
        if(tmax > fmax){
            fmax = max(fmax , tmax);
            flen = len;
            // cout<<len;
        }
        
        if(tmax < 0){
            tmax = 0;
            len = 0;
        }
    }
    return flen;
}
int main(){
    vector<int>v = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<ans(v);
}