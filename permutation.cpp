// #include <iostream>
// #include <vector>

// using namespace std;

// int n; // Size of the set
// vector<int> permutation; // Stores the current permutation
// vector<bool> chosen; // Tracks whether an element is already in the current permutation

// void search() {
//     if (permutation.size() == n) {
//         // Process permutation: Print it
//         for (int x : permutation) {
//             cout << x << " ";
//         }
//         cout << endl;
//     } else {
//         for (int i = 0; i < n; i++) {
//             if (chosen[i]) continue;
//             chosen[i] = true;
//             permutation.push_back(i);
//             search();
//             chosen[i] = false;
//             permutation.pop_back();
//         }
//     }
// }

// int main() {
//     n = 3; // Example size of the set, you can change it as needed
//     chosen.resize(n, false); // Initialize 'chosen' with 'false' for all elements

//     cout << "All permutations of the set {0, 1, 2, ..., " << n-1 << "}:" << endl;
//     search();

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n = 3; 
//     vector<int> p(n);
//     for (int i = 0; i < n; i++) {
//         cin>>p[i];
//     }
    

//     do {
//         for (int x : p) {
//             cout << x << " ";
//         }
//         cout << endl;
//     } while (next_permutation(p.begin(), p.end()));

//     return 0;
// }

// p[0]=4;
    // p[1]=1;
    // p[2]=7;



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n = 3; 
//     vector<int> p(n);

//     for (int i = 0; i < n; i++) {
//         cin>>p[i];
//     } 
    
//     if (next_permutation(p.begin(), p.end())) {
//         for (int x : p) {
//             cout << x << " ";
//         }
//         cout << endl;
//     } else {
//         sort(p.begin(), p.end());
//         for (int x : p) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool nextPermutation(vector<int>& p) {
//     int n = p.size();
//     int k = -1;

//     // Step 1: Find the largest index k such that p[k] < p[k + 1]
//     for (int i = n - 2; i >= 0; i--) {
//         if (p[i] < p[i + 1]) {
//             k = i;
//             break;
//         }
//     }

//     // If no such index exists, the permutation is the last permutation
//     if (k == -1) {
//         return false;
//     }

//     // Step 2: Find the largest index l greater than k such that p[k] < p[l]
//     int l = -1;
//     for (int i = n - 1; i > k; i--) {
//         if (p[k] < p[i]) {
//             l = i;
//             break;
//         }
//     }

//     // Step 3: Swap the value of p[k] with that of p[l]
//     swap(p[k], p[l]);

//     // Step 4: Reverse the sequence from p[k + 1] to the end
//     reverse(p.begin() + k + 1, p.end());

//     return true;
// }

// int main() {
//     int n ; 
//     cin>>n;
//     vector<int> p(n);

//     for (int i = 0; i < n; i++) {
//         cin >> p[i];
//     }

//     if (nextPermutation(p)) {
//         for (int x : p) {
//             cout << x << " ";
//         }
//         cout << endl;
//     } else {
//         sort(p.begin(), p.end());
//         for (int x : p) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     void printAllPermutations(vector<int>& nums) {
//         // Sort the array to ensure we start with the smallest permutation
//         sort(nums.begin(), nums.end());

//         do {
//             // Print current permutation
//             for (int num : nums) {
//                 cout << num << " ";
//             }
//             cout << endl;
//         } while (next_permutation(nums.begin(), nums.end()));
//     }
// };

// int main() {
//     Solution solution;
//     vector<int> nums = {1, 2, 3};

//     cout << "All permutations:" << endl;
//     solution.printAllPermutations(nums);

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool nextPermutation(vector<int>& p) {
//     int n = p.size();
//     int k = -1;

//     // Step 1: Find the largest index k such that p[k] < p[k + 1]
//     for (int i = n - 2; i >= 0; i--) {
//         if (p[i] < p[i + 1]) {
//             k = i;
//             break;
//         }
//     }

//     // If no such index exists, the permutation is the last permutation
//     if (k == -1) {
//         return false;
//     }

//     // Step 2: Find the largest index l greater than k such that p[k] < p[l]
//     int l = -1;
//     for (int i = n - 1; i > k; i--) {
//         if (p[k] < p[i]) {
//             l = i;
//             break;
//         }
//     }

//     // Step 3: Swap the value of p[k] with that of p[l]
//     swap(p[k], p[l]);

//     // Step 4: Reverse the sequence from p[k + 1] to the end
//     reverse(p.begin() + k + 1, p.end());

//     return true;
// }

// void printAllPermutations(vector<int>& nums) {
//     do {
//         for (int x : nums) {
//             cout << x << " ";
//         }
//         cout << endl;
//     } while (nextPermutation(nums));
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> p(n);

//     for (int i = 1; i <=n; i++) {
//         //cin >> p[i];
//         p[i]=i;
//     }

//     // Sort the vector initially to start with the smallest permutation
//     sort(p.begin(), p.end());

//     // Generate and print all permutations
//     printAllPermutations(p);

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool nextPermutation(vector<int>& p) {
//     int n = p.size();
//     int k = -1;

//     // Step 1: Find the largest index k such that p[k] < p[k + 1]
//     for (int i = n - 2; i >= 1; i--) {
//         if (p[i] < p[i + 1]) {
//             k = i;
//             break;
//         }
//     }

//     // If no such index exists, the permutation is the last permutation
//     if (k == -1) {
//         return false;
//     }

//     // Step 2: Find the largest index l greater than k such that p[k] < p[l]
//     int l = -1;
//     for (int i = n - 1; i > k; i--) {
//         if (p[k] < p[i]) {
//             l = i;
//             break;
//         }
//     }

//     // Step 3: Swap the value of p[k] with that of p[l]
//     swap(p[k], p[l]);

//     // Step 4: Reverse the sequence from p[k + 1] to the end
//     reverse(p.begin() + k + 1, p.end());

//     return true;
// }

// void printAllPermutations(vector<int>& nums) {
//     do {
//         for (size_t i = 1; i < nums.size(); ++i) {
//             cout << nums[i] << " ";
//         }
//         cout << endl;
//     } while (nextPermutation(nums));
// }

// int main() {
//     int n;
//     cin >> n;

//     // Initialize vector p with 1-based indexing
//     vector<int> p(n + 1);
//     for (int i = 1; i <= n; ++i) {
//         p[i] = i;
//     }

//     // Generate and print all permutations
//     printAllPermutations(p);

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool nextPermutation(vector<int>& p) {
    int n = p.size();
    int k = -1;

    // Step 1: Find the largest index k such that p[k] < p[k + 1]
    for (int i = n - 2; i >= 1; i--) {
        if (p[i] < p[i + 1]) {
            k = i;
            break;
        }
    }

    // If no such index exists, the permutation is the last permutation
    if (k == -1) {
        return false;
    }

    // Step 2: Find the largest index l greater than k such that p[k] < p[l]
    int l = -1;
    for (int i = n - 1; i > k; i--) {
        if (p[k] < p[i]) {
            l = i;
            break;
        }
    }

    // Step 3: Swap the value of p[k] with that of p[l]
    swap(p[k], p[l]);

    // Step 4: Reverse the sequence from p[k + 1] to the end
    reverse(p.begin() + k + 1, p.end());

    return true;
}

int main() {
    int n;
    cin >> n;

    // Initialize vector p with 1-based indexing
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) {
        p[i] = i;
    }

    // Find and print the last permutation
    while (nextPermutation(p)) {
        // Keep iterating until there are no more permutations
    }

    // Print the last permutation
    for (int i = 1; i <= n; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}
