#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &v , string s){
    int result =0;
    vector<string> str;
    vector<int>num;
    for(auto x : v){
        for(auto y : x){
            num.push_back(y);
        }
        int start = num[0];
        int end = num[1];
        string ss;
        if((end - start) < 0){
            for(int i = start ;i > end - 1;i--){
                char c = s[i];
                ss += c;
            }
            str.push_back(ss);
        }
        else{
            str.push_back(s.substr(start , end - start + 1));
        }
        // str.push_back(string(s.begin() + start ,s.begin() + end + 1));
        num.clear();
    }
    // for(auto z : str){
    //     cout<<z<<" ";
    // }
    for(int i =0;i<str.size() - 1;i++){
        cout<<1<<' ';
        for(int j =i+1;j<str.size();j++){
            // cout<<"i = "<<str[i]<<" ";
            // cout<<"j = "<<str[j]<<" ";
            if(str[j] == str[i]){
                // cout<<"1";
                result++;
            }
        }
    }
    // sort(str.begin(), str.end());
    // for(int i =1;i<str.size();i++){
    //     if(str[i] == str[i-1]){
    //         result++;
    //     }
    // }
    return result;
}

int main(){
    vector<vector<int>>vec{
        {1,4},
        {3,5},
        {5,2},
        {4,2}
    };
    string s = "abaab";
    cout<<solve(vec , s);
}