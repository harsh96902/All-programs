#include <iostream>
#include<string>
using namespace std;
void concatenateSum(string s, int s_size){
    string str = "";
    int num,num1,num2;
    int x = s_size-1;
    int i=0;
    int j = x; 
    while(i<j){
        string str1 = "";
        string str2 = "";
        str1 += s[i];
        str2 += s[j];        
        num = stoi(str1) + stoi(str2);
        str += to_string(num);
        i++;
        j--; 
    }
    cout<<str;
}
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    int s_size = s.size();
    concatenateSum(s,s_size);

} 
