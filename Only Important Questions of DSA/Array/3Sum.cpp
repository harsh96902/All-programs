#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        // -4 -1 -1 0 1 2
    vector<vector<int>> v;
    if(nums.size() < 3){
        return v;
    }
      
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size() - 2;i++){
        if(i == 0 ||(i>0 &&nums[i] != nums[i-1])){
            int lo = i+1;
            int hi = nums.size() - 1;
            int k =  nums[i];
            int sum = 0 - nums[i];
            while(lo < hi){
                if(nums[lo]+nums[hi] + k == 0){
                    vector<int> vect;
                    vect.push_back(nums[lo]);
                    vect.push_back(nums[hi]);
                    vect.push_back(nums[i]);
                    v.push_back(vect);
                        
                    while(lo <  hi&&nums[lo + 1] == nums[lo]){
                        lo++;
                    }
                    while(lo < hi &&nums[hi - 1] == nums[hi]){
                        hi--;
                    }
                    lo++;
                    hi--;
                        
                }
                else if(nums[lo] + nums[hi]<sum){
                    lo++;
                }
                else{
                    hi--;
                }
            }
        }
    }
    return v;
}
int main(){
vector<int>nums;
nums.push_back(-1);
nums.push_back(3);
nums.push_back(2);
nums.push_back(0);
nums.push_back(1);
nums.push_back(-3);
vector<vector<int>> vec;
vec = threeSum(nums);
for(int i =0;i<vec.size();i++){
    for(int j =0;j<vec[i].size();j++){
        cout<<vec[i][j]<<",";
    }
    cout<<"\n";
}
}