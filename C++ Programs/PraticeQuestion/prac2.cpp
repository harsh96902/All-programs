#include<bits/stdc++.h>
using namespace std;

int LongestSubSequence(vector<int> num){```````
    int temp_sum = 0;
    int final_sum = INT_MIN;
    for(int i = 0;i<num.size();i++){
        temp_sum += num[i];
        final_sum = max(final_sum , temp_sum);
        if(temp_sum < 0){
            temp_sum = 0;
        }
    }
    return final_sum;
}
int main(){
    vector<int>n;
    for(int i = 0;i<6;i++){
        int x;
        cin>>x;
        n.push_back(x);
    }
    cout<<LongestSubSequence(n);
}