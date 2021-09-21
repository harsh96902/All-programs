#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends




int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int arr[n*n],x=0;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          arr[x] = mat[i][j];
          x++;
      }
  }
  sort(arr,arr+x);
  return arr[k-1];
}