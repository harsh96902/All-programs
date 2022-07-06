#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sub(string ip ,string op ,vector<string>&vec){
       
        if(ip.length() == 0){
            vec.push_back(op);
            return;
        }
        if(isalpha(ip[0])){
            string ipx = ip;
            string op1 = op;
            string op2 = op;
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
            ip.erase(ip.begin() + 0);
            sub(ip,op1,vec);
            sub(ip,op2,vec);
        }
        else{
            string opx = op;
            opx.push_back(ip[0]);
            ip.erase(ip.begin() + 0);
            sub(ip ,opx,vec);
        }
        
     }
    vector<string> letterCasePermutation(string s) {
        string ip = s;
        string op = "";
        vector<string>v;
        sub(ip , op , v);
        return v;
    }
};
int main(){
    string str = "ab4o1";
    Solution s;
    vector<string>st;
    st = s.letterCasePermutation(str);
    for(auto i : st){
        cout<<i<<" ";
    }
}