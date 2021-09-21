#include<iostream>
using namespace std;
int max_count(string s){
    int n = s.length();
    int count0 = 0;
    int  count1 = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0 == count1){
            cnt++;
        }
    }
    if(cnt == 0){
        return -1; // split not possible
    }
    else{
        return cnt;
    }
}
int main(){
    string s = "0100110101";
    cout<<max_count(s);
}