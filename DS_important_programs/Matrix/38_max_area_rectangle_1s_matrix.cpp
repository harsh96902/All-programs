#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int arr[m]; //  for histogram data
        int left,right;
        int final_area = 1;
        for(int i=0;i<m;i++){
            arr[i] = 0;
        }
        for(int i=0;i<n;i++){
            // create a histogram of m bar amd check max area for each row
            for(int j=0;j<m;j++){
                if(M[i][j] == 1){
                    arr[j] = arr[j]+1;
                }
                else{
                    arr[j] = 0;
                }
                // cout<<arr[j]<<" ";
            }
            // cout<<endl;
            // check the  max area  for each histogram bar-->>
            for(int i=0;i<m;i++){
                left = i-1,right = i+1;
                int temp_area = arr[i];
                //check left side bar
                while(left >=0 && arr[left] >= arr[i]){
                    left--;
                    temp_area = temp_area + arr[i];
                }
                // check right side bar 
                while(right <= m-1 && arr[right] >=arr[i]){
                    right++;
                    temp_area = temp_area + arr[i];                    
                }
                if(temp_area > final_area){
                    final_area = temp_area;
                }
            }
        }
        return final_area;
        
    }
};