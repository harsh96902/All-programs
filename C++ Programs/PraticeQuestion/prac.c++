#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int num;
    int x;
    vector<int> vect;
    for(int i=0;i<num;i++){
        cin>>x;
        vect.push_back(x);
    }
    vect.erase(vect[2]);

}