#include <bits/stdc++.h>
using namespace std;

const int MAX = 100; 

int  b[MAX];
int a[] = {285, 310, 179, 652, 351, 423, 861, 254, 450, 520};

void Merge(int low, int mid, int high) {

    int h = low, i = low, j = mid + 1;

    while (h <= mid && j <= high) {

        if (a[h] < a[j]) {
            b[i] = a[h];
            h = h + 1;
        }
        else {
            b[i] = a[j];
            j = j + 1;
        }

        i = i + 1;

    }

    int k;

    if (h > mid) {

        for (k = j; k <= high; k++) {
            b[i] = a[k];
            i = i + 1;
        }

    }
    else {

        for (k = h; k <= mid; k++) { 
            b[i] = a[k];
            i = i + 1;
        }

    }

    for (k = low; k <= high; k++) {
        a[k] = b[k];
    }

}

void MergeSort(int low, int high) {

    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, mid, high);
    }
    
}

void printArray(int a[], int n) { 
    for (auto i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }   
    cout<<endl; 
}

int main() {


    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }


    int n = sizeof(a) / sizeof(a[0]);
    int l = 0, h = n - 1;

    MergeSort(l, h);

    cout << "Sorted array: ";
    printArray(a,n);


    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    return 0;
}