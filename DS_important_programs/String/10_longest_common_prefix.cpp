#include<iostream>
// #include<string.h>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string> strs){
    string my_string;
        string first_str = strs[0];
        for(int i=0;i<=first_str.length();i++){
            int j =1;
            while(j<strs.size()){
                string tmp_str = strs[j];
                if(first_str[i] == tmp_str[i]){
                    j++;
                    my_string = my_string + first_str[i];
                }
                else{
                    return my_string;
                }                        
            
            }
        }
}
int main(){
    string s = "Harsh";
    cout<<s.length()<<endl;
    vector<string>str;
    int n;
    cin>>n;
    string a;
    for(int i =0;i<n;i++){
        cin>>a;
        str.push_back(a);
    }
    cout<<longestCommonPrefix(str);
    // for(int i =0;i<n;i++){
    //     cout<<str[i];
    // }
    
}