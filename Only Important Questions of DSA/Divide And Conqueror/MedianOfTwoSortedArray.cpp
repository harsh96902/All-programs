#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // double median = 0;
        int vect[100000];
        int size =  nums1.size() + nums2.size();
        int j=0;
        int k=0;
        int i=0;
        double z;
        int n1 = nums1.size();
        int n2 = nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                vect[k] = nums1[i];
                i++;
                k++;
            }
            else{
                vect[k] = nums2[j];
                k++;
                j++;
            }
        }
        while(i<n1){
            vect[k] = nums1[i];
            k++;
            i++;
        }
        while(j<n2){
            vect[k] = nums2[j];
            j++;
            k++;
        }
        // int size = vect.size();
        if(size%2 != 0){
            z = (double)vect[size/2];                                         
        }
        else{
            z = (double)(vect[(size/2) - 1] + vect[size/2])/2.0;
        }
        return z;
    }        
};
int main() {
    double num;
    vector<int> v1 = {1,3};
    vector<int> v2 =  {2};
    Solution s;
    num = s.findMedianSortedArrays(v1,v2);
    cout<<num;
}