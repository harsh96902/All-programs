#include<iostream>
using namespace std;
string number_press(string s[],string str){
    string num_str = "";
    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            num_str = num_str + '0';
        }
        else{
            int pos = str[i] - 'A';  // get the index of character
            num_str = num_str + s[pos]; 
        }
    }
    return num_str;
}
int main(){
    string s[] = {"2","22","222"
    ,"3","33","333",
    "4","44","444"
    ,"5","55","555",
    "6","66","666",
    "7","77","777","7777",
    "8","88","888",
    "9","99","999","9999"};
    string str = "GEEKSF ORGEE KS";
    cout<<number_press(s,str);
}