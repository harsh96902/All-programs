#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> result;
        if(nums.size() < 3){
            return result;
        }
        sort(nums.begin(), nums.end());

        for(int i =0;i<nums.size() - 2;i++){
            if(i == 0 || i>0 && nums[i] != nums[i-1]){

                // int num = nums[i];
                int lo = i+1;
                int hi = nums.size() - 1;
                int k = nums[i];
                int sum = 0 - nums[i];

                while(lo < hi){
                    if(nums[lo] + nums[hi] + k == 0){
                        vector<int>num;
                        num.push_back(nums[lo]);
                        num.push_back(nums[hi]);
                        num.push_back(k);
                        result.push_back(num);
                        while(nums[lo] == nums[lo + 1]){
                            lo++;
                        }
                        while(nums[hi] == nums[hi - 1]){
                            hi--;
                        }
                        lo++;
                        hi--;
                    }
                    else if((nums[lo] + nums[hi]) < sum){
                        lo++;
                    }
                    else{
                        hi--;
                    }
                }
            }
        }
        return result;
    }
};

int main(){
    // vector<int>v = {-1,3,2,0,1,-3};
    vector<int>nums;
    nums.push_back(-1);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(-3);
    Solution s;
    vector<vector<int>>vec = s.threeSum(nums);
    for(auto x : vec){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}