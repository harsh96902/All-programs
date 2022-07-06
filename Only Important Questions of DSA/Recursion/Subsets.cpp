#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>AllSubsets;
    void sub(vector<int>& subset, int i, vector<int>& nums){
        if(i == nums.size()){
            AllSubsets.push_back(subset);
            return;
        }
        // for ith element is not consider
        sub(subset,i+1,nums);
        // for ith element is consider
        subset.push_back(nums[i]);
        sub(subset,i+1,nums);
        subset.pop_back();  // we will use pop_back for backtracking
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>subset;
        sub(subset,0,nums);
        
        return AllSubsets;
    }
};
int main(){
    vector<int> v = {1,2,3};
    Solution s;
    vector<vector<int>>All1Subsets = s.subsets(v);
    for(auto sub : All1Subsets){
        for(auto s : sub){
            cout<<s<<" ";
        }
        cout<<"\n";
    }

}