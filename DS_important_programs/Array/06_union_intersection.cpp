#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    int x=0,y=0;
    // y is  used for the no. of elements  match a1[]  and a2[]
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a1[j]==a2[i]){
                x = 1;
                y++;
            }
        }
        // if x is not equal to 1, it means element  doesn't belongs to the both array   
        if(x!=1){
            return "No";
        }
    }
    //  if y = m , means all the elements of  a2[] belongs to a1[]
    if(y == m){
        return "Yes";
    }
    else{
        return "No";
    }
}