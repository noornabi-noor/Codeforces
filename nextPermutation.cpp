#include <iostream>
#include <vector>
#include <algorithm>


void nextPermutation(std::vector<char>& nums) {
    int n = nums.size();
    int i = n - 2;
        // Step 1: Find the first element that is smaller than the one to its right
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {  
        int j = n - 1;

        // Step 2: Find the rightmost element that is larger than nums[i]
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }

        // Step 3: Swap the two elements
        std::swap(nums[i], nums[j]);
    }

    // Step 4: Reverse the sequence from i+1 to the end
    std::reverse(nums.begin() + i + 1, nums.end());
    
}

int main() {
    std::vector<char> nums = { 'a', 'c' ,'d','f','e'};
    int n = nums.size();

    std::cout << "Original permutation: ";
    for (auto num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Next permutation:\n";
    
    nextPermutation(nums);
    for (auto num : nums) {
        std::cout << num << " ";
    }
            std::cout << std::endl;
    return 0;
}







// #include <iostream>
// #include <vector>
// #include <algorithm>

// // Function to find the next permutation
// bool nextPermutation(std::vector<char>& nums) {
//     int n = nums.size();
//     int i = n - 2;

//     // Step 1: Find the first element that is smaller than the one to its right
//     while (i >= 0 && nums[i] >= nums[i + 1]) {
//         i--;
//     }

//     if (i >= 0) {  // If such an element is found
//         int j = n - 1;

//         // Step 2: Find the rightmost element that is larger than nums[i]
//         while (j >= 0 && nums[j] <= nums[i]) {
//             j--;
//         }

//         // Step 3: Swap the two elements
//         std::swap(nums[i], nums[j]);
//     } else {
//         return false; // No next permutation, array is sorted in descending order
//     }

//     // Step 4: Reverse the sequence from i+1 to the end
//     std::reverse(nums.begin() + i + 1, nums.end());
//     return true;
// }

// int main() {
//     std::vector<char> nums = {'c', 'b', 'a','d'};

//     // Sort the array to start with the lexicographically smallest permutation
//     std::sort(nums.begin(), nums.end());

//     std::cout << "All permutations:\n";

//     bool hasNext = true;
//     while (hasNext) {
//         for (auto num : nums) {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl;
        
//         hasNext = nextPermutation(nums);
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool nextPermutation(vector<char>&ch){                // a b c d-> a b d c    check ch[n-1]< ch[n] then we swap(ch[n-1],ch[n])
//     int n=ch.size();
    
//     int j=n-2;
//     while(j>=0 && ch[j]>=ch[j+1]){
//         j--;
//     }

//     if(j>=0){
//         int i=n-1;
//         while(i>=0 && ch[i]<=ch[j]){
//             i--;
//         }
//         swap(ch[i],ch[j]);
//     }
//     else{
//         return false;
//     }     
//     //reverse(ch.begins()+j+1,ch.end());
//     reverse(ch.begin() + j + 1, ch.end());
//     return true;                                
// }


// int main(){
//     vector<char>chr;
//     chr={'3','a','1','a'};
    
//     sort(chr.begin(),chr.end());  //O(nlogn)

//     int tru=1;
//     while(tru){
//         for (auto num : chr) {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl;
        
//         tru = nextPermutation(chr);
//     }

//     return 0;
// }