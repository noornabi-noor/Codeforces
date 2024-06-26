// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,x;
//     cin>>n>>x;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n-1);
//     auto lower = lower_bound(a, a+n-1, x);
//     cout<<*lower<<"\n";
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());

//     auto it = upper_bound(a.begin(), a.end(), x);
//     auto lower = lower_bound(a.begin(), a.end(), x);

//     if (it != a.begin()) {
//         cout << *(--it) << " ";
//     } else {
//         cout << "-1"<< " ";
//     }

    
//     if (lower != a.end()) {
//         cout << *lower << " ";
//     } else {
//         cout << "-1"<< " ";
//     }

//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;
//     int a[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     sort(a, a + n);

//     // Find the upper bound
//     auto it = upper_bound(a, a + n, x);

//     // Find the lower bound
//     auto lower = lower_bound(a, a + n, x);

//     // Find the floor value
//     if (it != a) {
//         cout << *(--it) << " ";
//     } else {
//         cout << "-1" << " ";
//     }

//     // Find the ceil value
//     if (lower != (a + n)) {
//         cout << *lower << " ";
//     } else {
//         cout << "-1" << " ";
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
//     sort(arr, arr + n);
    
//     int floorValue = -1;
//     int ceilValue = -1;

//     auto it = upper_bound(arr, arr + n, x);
//     if (it != arr) {
//         floorValue = *(--it);
//     }

//     auto lower = lower_bound(arr, arr + n, x);
//     if (lower != arr + n) {
//         ceilValue = *lower;
//     }

//     return {floorValue, ceilValue};
// }

// int main() {
//     int n = 8;
//     int x = 7;
//     int arr[] = {5, 6, 8, 9, 6, 5, 5, 6};

//     pair<int, int> result = getFloorAndCeil(arr, n, x);
//     cout << "Floor: " << result.first << ", Ceil: " << result.second << endl;

//     return 0;
// }






// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Binary search to find the lower bound
// int lowerBound(vector<int>& arr, int target) {
//     int left = 0, right = arr.size() - 1;
//     int result = -1; // Initialize result to -1 (indicating not found)
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] >= target) {
//             result=mid;
//             //result = arr[mid]; // Update result if current element is greater than or equal to target
//             right = mid - 1; // Move left to continue searching for lower values
//         } else {
//             left = mid + 1;
//         }
//     }
//     return result;
// }

// // Binary search to find the upper bound
// int upperBound(vector<int>& arr, int target) {
//     int left = 0, right = arr.size() - 1;
//     int result = -1; // Initialize result to -1 (indicating not found)
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] <= target) {
//             result=mid;
//             //result = arr[mid]; // Update result if current element is less than or equal to target
//             left = mid + 1; // Move right to continue searching for higher values
//         } else {
//             right = mid - 1;
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> arr = {5,7,7,8,8,10};
//     int target = 6;
//     sort(arr.begin(), arr.end()); // Ensure array is sorted

//     int lower = lowerBound(arr, target);
//     int upper = upperBound(arr, target);

//     cout << "Lower Bound: " << lower << endl;
//     cout << "Upper Bound: " << upper << endl;

//     return 0;
// }




// #include<bits/stdc++.h>

// using namespace std;

// int solve(int n, int key, vector < int > & v) {
//   int start = 0;
//   int end = n - 1;
//   int res = -1;

//   while (start <= end) {
//     int mid = start + (end - start) / 2;
//     if (v[mid] == key) {
//       res = mid;
//       start = mid + 1;

//     } else if (key < v[mid]) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }
//   }
//   return res;
// }

// int main() {
//   int n = 7;
//   int key = 13;
//   vector < int > v = {3,4,13,13,13,20,40};
  
//   // returning the last occurrence index if the element is present otherwise -1
//   cout << solve(n, key, v) << "\n";

//   return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,x;
//     cin>>n>>x;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     auto up=upper_bound(v.begin(),v.end(),x);
//     auto lo=lower_bound(v.begin(),v.end(),x);

//     if(up!=v.end() && *up==x){
//         cout<<up-v.begin()<<" "<<lo-v.begin()-1<<"\n";
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     auto up = upper_bound(v.begin(), v.end(), x);
//     auto lo = lower_bound(v.begin(), v.end(), x);

//     // Check if x exists in the vector
//     if (lo != v.end() && *lo == x) {
//         cout << lo - v.begin() << " " << up - v.begin() - 1 << "\n";
//     } else {
//         cout << "-1 -1\n"; // x doesn't exist in the vector
//     }

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int firstOccurences(int a[],int n,int x){
//     int l=0,h=n,result=-1;
//     while(l<h){
//         int mid=(l+h)/2;
//         if(a[mid]==x){
//             result=mid;
//             h=mid-1;                 //first occurences
//             //l=mid+1;               //last occurences
//         }
//         else if(a[mid]>x){
//             h=mid;
//         }
//         else{
//             l=mid;
//         }
//     }
//     return result;
// }

// int main(){
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int ans=firstOccurences(a,n,x);
//     cout<<ans<<"\n";
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <utility> // For std::pair

// std::pair<int, int> findMinValueAndIndex(const std::vector<int>& nums) {
//     int l = 0, h = nums.size() - 1;

//     while (l < h) {
//         int mid = l + (h - l) / 2;
        
//         if (nums[mid] > nums[h]) {
//             // Minimum must be in the right part
//             l = mid + 1;
//         } else {
//             // Minimum could be the mid element or in the left part
//             h = mid;
//         }
//     }
    
//     // At the end of the loop, l == h, which is the index of the smallest value
//     return {l, nums[l]};
// }

// int main() {
//     std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    
//     std::pair<int, int> result = findMinValueAndIndex(nums);
//     std::cout << "Minimum value: " << result.second << "\n";
//     std::cout << "Index of minimum value: " << result.first << "\n";
    
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <utility> // For std::pair

// std::pair<int, int> findMaxValueAndIndex(const std::vector<int>& nums) {
//     int l = 0, h = nums.size() - 1;

//     while (l <= h) {
//         int mid = l + (h - l) / 2;
        
//         if (nums[mid] > nums[h]) {
//             // The maximum is in the right part of the array, or it is the mid itself
//             l = mid;
//         } else {
//             // The maximum is in the left part of the array
//             h = mid - 1;
//         }

//         //To prevent infinite loop when the mid is the maximum
//         if (l == h - 1) {
//             if (nums[l] > nums[h]) {
//                 return {l, nums[l]};
//             } else {
//                 return {h, nums[h]};
//             }
//         }
//     }
    
//     // At the end of the loop, l == h, which is the index of the largest value
//     return {l, nums[l]};
// }

// int main() {
//     std::vector<int> nums = {4, 5, 6, 7, 8, 0, 1, 2};
    
//     std::pair<int, int> result = findMaxValueAndIndex(nums);
//     std::cout << "Maximum value: " << result.second << "\n";
//     std::cout << "Index of maximum value: " << result.first << "\n";
    
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <utility> // For std::pair
// #include <climits> // For INT_MAX and INT_MIN

// class Solution {
// public:
//     std::pair<int, int> findMinAndMaxIndices(const std::vector<int>& arr) {
//         int n = arr.size();
//         if (n == 0) return {-1, -1}; // Edge case: empty array

//         int l = 0, h = n - 1;
//         int minIndex = -1, maxIndex = -1;
//         int minValue = INT_MAX, maxValue = INT_MIN;

//         while (l <= h) {
//             int mid = l + (h - l) / 2;
            
//             // Check and update minimum
//             if (arr[mid] <= minValue) {
//                 minValue = arr[mid];
//                 minIndex = mid;
//             }
//             if (arr[l] <= minValue) {
//                 minValue = arr[l];
//                 minIndex = l;
//             }
//             if (arr[h] <= minValue) {
//                 minValue = arr[h];
//                 minIndex = h;
//             }

//             // Check and update maximum
//             if (arr[mid] >= maxValue) {
//                 maxValue = arr[mid];
//                 maxIndex = mid;
//             }
//             if (arr[l] >= maxValue) {
//                 maxValue = arr[l];
//                 maxIndex = l;
//             }
//             if (arr[h] >= maxValue) {
//                 maxValue = arr[h];
//                 maxIndex = h;
//             }

//             // Determine which half to search next for the minimum
//             if (arr[mid] <= arr[h]) {
//                 h = mid - 1;
//             } else {
//                 l = mid + 1;
//             }
//         }

//         return {minIndex, maxIndex};
//     }
// };

// int main() {
//     Solution sol;
//     std::vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    
//     std::pair<int, int> result = sol.findMinAndMaxIndices(arr);
//     std::cout << "Index of minimum value: " << result.first << "\n";
//     std::cout << "Index of maximum value: " << result.second << "\n";
    
//     return 0;
// }
