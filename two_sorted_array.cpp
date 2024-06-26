// #include<bits/stdc++.h>
// using namespace std;

// int biSearch(vector<int>&v,int n){

// }


// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> v1(n),v2(m),v3(n+m);
//     for(int i=0;i<n;i++){
//         cin>>v1[i];
//         v3[i]=v1[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>v2[i];
//         v3[n+i]=v2[i];
//     }
    

//     sort(v3.begin(),v3.end());
//     int mid=(n+m)/2;

//     if((n+m)%2==0){
//         float res=(v3[mid]+v3[mid-1])/2.0;
//         cout << "The median of two sorted array is " << fixed << setprecision(1)
//          << res << '\n';
//     }
//     else{
//        cout << "The median of two sorted array is " << v3[mid] << '\n'; 
//     }

//     return 0;
// }




#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int n = nums1.size();
        int m = nums2.size();
        int imin = 0, imax = n;
        int half_len = (n + m + 1) / 2;

        while (imin <= imax) {
            int i = (imin + imax) / 2;
            int j = half_len - i;

            if (i < n && nums1[i] < nums2[j - 1]) {
                // i is too small, must increase it
                imin = i + 1;
            } else if (i > 0 && nums1[i - 1] > nums2[j]) {
                // i is too large, must decrease it
                imax = i - 1;
            } else {
                // i is perfect
                int max_of_left;
                if (i == 0) {
                    max_of_left = nums2[j - 1];
                } else if (j == 0) {
                    max_of_left = nums1[i - 1];
                } else {
                    max_of_left = max(nums1[i - 1], nums2[j - 1]);
                }

                if ((n + m) % 2 == 1) {
                    return max_of_left; // Odd case
                }

                int min_of_right;
                if (i == n) {
                    min_of_right = nums2[j];
                } else if (j == m) {
                    min_of_right = nums1[i];
                } else {
                    min_of_right = min(nums1[i], nums2[j]);
                }

                return (max_of_left + min_of_right) / 2.0; // Even case
            }
        }

        throw invalid_argument("Input arrays are not sorted or have other issues");
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "Median is " << solution.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
