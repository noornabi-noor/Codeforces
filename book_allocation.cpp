#include <bits/stdc++.h>
using namespace std;

bool isPossible(std::vector<int> &A, long long int X, int B) {
    int n = A.size();
    long long int sum = X;
    int stdcnt = 1, i = 0;
    while (i < n) {
        if (sum - A[i] < 0) {
            stdcnt++;
            sum = X;
        } else {
            sum -= A[i];
            i++;
        }
        if (stdcnt > B) return false;
    }
    return true;
}

int books(std::vector<int> &A, int B) {
    int n = A.size();
    if (n < B) return -1;

    long long int pages = std::accumulate(A.begin(), A.end(), 0LL);
    long long int low = *std::max_element(A.begin(), A.end());
    long long int high = pages;
    long long int mid, ans = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (isPossible(A, mid, B)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    std::vector<int> arr = {5,6,8,4,10,13,2,3,7};
    int n = 9, m = 5;

    int result = books(arr, m);
    std::cout << "Minimum number of pages: " << result << std::endl;

    return 0;
}




// #include<bits/stdc++.h>

// using namespace std;


// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int>v(n);
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mx=max(mx,v[i]);
//     }
//     int s=0;
//     vector<int>sm;
//     for(int i=0;i<n;i++){
//         s+=v[i];;
//         if(s>=mx){
//             s-=v[i];
//             sm.push_back(s);
//             s=v[i];
//         }
//     }

//     for(int i=0;i<sm.size();i++){
//         cout<<sm[i]<<" ";
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> v(n);
//     int mx = INT_MIN;
    
//     // Read the input array and determine the maximum element
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//         mx = max(mx, v[i]);
//     }
    
//     int s = 0;
//     vector<int> sm;
    
//     // Calculate the required sums
//     for (int i = 0; i < n; i++) {
//         s += v[i];
//         if (s >= mx) {
//             sm.push_back(s - v[i]);
//             s = v[i];
//         }
//     }
    
//     // Ensure to add the last sum if it wasn't added
//     if (s > 0) {
//         sm.push_back(s);
//     }
    
//     // Print the sums
//     int mx1=INT_MIN;
//     for (int i = 0; i < sm.size(); i++) {
//         //cout << sm[i] << " ";
//         mx1=max(mx1,sm[i]);
//     }
//     cout<<mx1<<"\n";
    
//     return 0;
// }


// 9
// 5
// 5 6 8 4 10 13 2 3 7