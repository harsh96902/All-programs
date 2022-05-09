#include<bits/stdc++.h>
#include<vector>
using namespace std;
// In this problem we will take two vector -
// One will store the max value from left and another will store the max value from right to left
// Then, we will take the small value on comparing both vector at the same index
// Then subtract height vector value from that vector value and update the result 
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>left;
        vector<int>right;
        int result  = 0;
        int maxi = height[0];
        for(int i=0;i<height.size();i++){
            maxi = max(maxi , height[i]);
            left.push_back(maxi);
            // cout<<left[i]<<" ";
        }
        // cout<<"\n";
        int maxi2 = height[n-1];
        for(int i = n -1;i>=0;i--){
            maxi2 = max(maxi2 , height[i]);
            right.push_back(maxi2);
            
        }
        reverse(right.begin(), right.end());
        // for(int i =0;i<right.size();i++){
        //     cout<<right[i]<<" ";
        // }
        int fmin = 0;
        for(int i =0;i<left.size();i++){
            fmin = min(left[i] , right[i]);
            result += fmin - height[i];
        }
        return result;
        
    }
};
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(5);
    Solution s;
    cout<<s.trap(vec);
}