// #include<bits/stdc++.h>
// using namespace std;

// int searchInsert(vector<int>& nums, int target) {
//         int h=nums.size(),l=0;
//         while(l<h){
//             int mid=(l+h)/2;
//             if(nums[mid]==target){
//                 return mid;
//             }
//             else if(nums[mid]<target){
//                 l=mid+1;
//             }
//             else{
//                 h=mid;
//             }
//         }
//         nums.push_back(target);
//         sort(nums.begin(), nums.end());
//         int ind = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == target)
//             {
//                 ind = i;
//                 break;
//             }
//         }
//         return ind;
//     }



// int main(){
//     vector<int>v={1,3,5,6};
//     int tar=2;

//     // if(searchInsert(v,tar)==-1){
//     //     v.push_back(tar);
//     //     sort(v.begin(), v.end());
//     //     int ind = 0;
//     //     for (int i = 0; i < v.size(); i++)
//     //     {
//     //         if (v[i] == tar)
//     //         {
//     //             ind = i;
//     //             break;
//     //         }
//     //     }
//     //     cout<<ind<<"\n";
//     // }
//     // else{
//     //     cout<<searchInsert(v,tar);
//     // }
    
//     cout<<searchInsert(v,tar);


//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int x) {
    int n = arr.size(); // size of the array
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {1, 2, 4, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}
