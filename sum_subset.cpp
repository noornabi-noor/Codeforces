// #include<bits/stdc++.h>
// using namespace std;

// void printSubsetsRec(int arr[], int i, int sum, int n, int subset[], int subsetSize) {

//     if (i == n) {
//         if (sum == 0) {
//             for (int j = 0; j < subsetSize; j++) {
//                 cout << subset[j] << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     subset[subsetSize] = arr[i];
//     printSubsetsRec(arr, i + 1, sum - arr[i], n, subset, subsetSize + 1);
//     printSubsetsRec(arr, i + 1, sum, n, subset, subsetSize);
// }

// void printAllSubsets(int arr[], int n, int sum) {
//     int subset[n]; 
//     printSubsetsRec(arr, 0, sum, n, subset, 0);
// }

// int main() {
//     int arr[] = { 11, 13, 24, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 30;
//     printAllSubsets(arr, n, sum);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int i, int sum, int n, int sub[],int subsiz){
    if(i==n){
        if(sum==0){
            for(int j=0;j<subsiz;j++){
                cout<<sub[j]<<" ";
            }
            cout<<endl;
        }
        return; 
    }
    sub[subsiz]=arr[i];
    subset(arr,i+1,sum-arr[i],n,sub,subsiz+1);
    subset(arr,i+1,sum,n,sub,subsiz);
}

void printSub(int arr[],int n, int sum){
    int sub[n];
    subset(arr,0,sum,n,sub,0);
}


int main() {
    int arr[] = { 11, 13, 24, 6 };
    int n = 4;
    int sum = 30;
    printSub(arr, n, sum);
    return 0;
}
