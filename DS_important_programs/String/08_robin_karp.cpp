#include<iostream>
using namespace std;
void check_patternIndex(string s , string str){
    int index =0;
    int z = -1;
    int n = s.length();
    while(index != -1){
        // cout<<"i = "<<i<<endl;
        index = s.find(str,z + 1);
        z = index;
        if(index != string::npos){  // if  index is -1 ,means not found
            cout<<"Pattern found at index = "<<index<<endl;   
        }
    }
}
int main(){
    string s = "hdkjshdghdk";
    string str = "hd";
    check_patternIndex(s , str);
}