#include<bits/stdc++.h>
using namespace std;
// Remember the three points for this sorting -->
// * Take the three pointer L, M , H
// * if M == 0 , then swap(L , M); L++; M++;
// * if M == 1 , then M++
// * if M == 2 , then swap(L , H); H--
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m =0;
        int h = nums.size() - 1;
        int i =0;
        while(m <= h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
              if(nums[m]== 2){
                  swap(nums[m],nums[h]);
                  // m++;
                  h--;
              }
            }
        }
    }
};
int main(){
    vector<int>v ={1,0,2,0,2,1,1,1,0};
    Solution s;
    s.sortColors(v);
    for(auto i : v){
        cout<<i<<" ";
    }
}