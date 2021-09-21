#include<iostream>
#include<vector>   // Vector is just like array but it manage size automatically.
// Vectors are sequence containers representing arrays that can change in size.
// If we want to add extra element in array then we can use vector instead
// of changing size of array.
using namespace std;
void display(vector<int> &x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr;     //vector<int> is just like data type here
    int n,size =5;
    for(int i=0;i<size;i++){
        cout<<"Enter  the  element: ";
        cin>>n;
        arr.push_back(n); // WE can use some more function for the vector
        
    }
    display(arr);


    // how to reverse a vector--->>>
    reverse(v.begin(),v.end());  // reverse the whole vector

    reverse(v.begin() + 2,v.end() + 4);  // reverse within given range

    // how to sort a vector--->>
    sort(v.begin(),v.end());
    

}