#include<ios>
#include<string>
using namespace std;
void regToRoll(string s, int s_size){
    string str = " ";
    char c;
    for(int i=0;i<s_size;i=i+2){
        int j = i;
        if(s[j] > s[j+1] || s[j] == s[j+1]){
            str += s[j];
        }
        if(s[j] < s[j+1]){
            str += s[j+1];
        }    
    }
    cout<<str;


}
int main(){
    int n;
    cout<<" Enter any number : ";
    cin>>n;
    string s = to_string(n);
    int s_size = s.size();
    regToRoll(s,s_size);
    // cout<<s[3];

} 