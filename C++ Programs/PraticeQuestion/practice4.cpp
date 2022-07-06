#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>result;
void target(vector<int>& vec , int i, vector<int>& nums){

    if(i == nums.size()){
        result.push_back(vec);
        return;
    }

    // ith index not consider
    target(vec , i+1 , nums);
    vec.push_back(nums[i]);
    // ith index consider
    target(vec , i+1 , nums);
    vec.pop_back();
}
vector<vector<int>>subset(vector<int> &num){
    vector<int>sub;
    target(sub,0,num);
    return result;
}

int main(){
    vector<int>v = {1,2,3};
    vector<vector<int>>vc = subset(v);
    for(auto x : vc){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}
