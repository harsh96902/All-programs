#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int find3Numbers(int A[], int n, int X)
{
    int start, last;
    //Sort the elements
    for (int i = 0; i < n; ++i) 
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (A[i] > A[j]) 
                {
                    int a =  A[i];
                    A[i] = A[j];
                    A[j] = a;
                }
            }
        }
   
    
    // sort(A, A + n);
 
    //Now fix the first element one by one and find the
    //   other two elements 
    for (int i = 0; i < n - 2; i++) {
 
        // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other
        start = i + 1; // index of the first element in the
        // remaining elements
 
        last = n - 1; // index of the last element
        while (start < last) {
            if (A[i] + A[start] + A[last] == X) {
                return 1;
            }
            else if (A[i] + A[start] + A[last] < X)
                start++;
            else // A[i] + A[l] + A[r] > sum
                last--;
        }
    }
 
    // If we reach here, then no triplet was found
    return 0;
}

// { Driver Code Starts.

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n,X;
		scanf("%d",&n);
		scanf("%d",&X);
		int i,A[n];
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
        printf("%d\n", find3Numbers(A, n, X));
    }
}