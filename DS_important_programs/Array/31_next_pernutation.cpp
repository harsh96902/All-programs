#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int i = N-1;
        int index1 = i;
        // if vector  have only 1 element
        if(N==1){
            return arr;
        }
        
        // from the last,find the index1  which is less than  arr[i]
        while(arr[i]<arr[i-1]){
            i=i-1;
            index1 = i-1;
            // if vector in descending order then sort it into ascending order
            //  if i == 0  means there is not any i-1 element which is less than i.
            if(i == 0){
                sort(arr.begin(),arr.end());
                return arr;
            }
            
        }
        // if  vector in  asscending order  then  swap last two elements
        if(index1 == N-1){
            swap(arr[N-1],arr[N-2]);
            return arr;
        }
        int j =index1+1;
        int just_greater = arr[j];
        int temp_num=arr[j];
        int index2 = j;
        // find the  index2  from index1+1 to  the end which is just greater than index1
        while(j<N){
            if(arr[j]>arr[index1]){
                temp_num = arr[j];
                if(temp_num<just_greater){
                    just_greater = temp_num;
                    index2 = j;
                }
            }
            j++;
        }
        // swap the elements of  index1 and index2
        swap(arr[index2],arr[index1]);
        int p = index1+1;
        int q = N-1;
        //  reverse the element  from  index1 + 1 to the last
        while(p<q){
            swap(arr[p],arr[q]);
            p++;
            q--;
        }
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends