#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<char>& v){
    int m=0 , n = v.size() -1;
    while(m<n){
        swap(v[m],v[n]);
        m++;
        n--;
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // We can create a iterator like this for vector--->
    // using begin() and end()--->
    // for(vector<int> :: iterator it=v.begin(); it != v.end();it++){
    //     cout<<*it<<" ";
    // }
}
int main(){
    // vector<int> v = {"h","d","y","p"};
    vector<char> v;
    int n;
    char a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    // v.pop_back();
    reverse(v);
}