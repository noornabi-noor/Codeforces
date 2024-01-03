// #include <bits/stdc++.h>
// using namespace std;

// int a[100];

// int partition(int l,int h){
//     int pivot=a[l];
//     int i=l,j=h;

//     while(i<j){
//         while(a[i]<=pivot){
//             i++;
//         }
//         while(a[j]>pivot){
//             j--;
//         }

//         if(i<j){
//             swap(a[i],a[j]);
//         }
        
//     }
//     swap(a[j],a[l]);
//     return j;
// }

// void qs(int l,int h){
//     int pivot;
//     if(l<h){
//         pivot=partition(l,h);
//         qs(l,pivot-1);
//         qs(pivot+1,h);
//     }
    
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int l=0,h=n-1;
//     qs(l,h);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;

int a[100];

void Interchange(int i, int j){
    int p=a[i];
    a[i]=a[j];
    a[j]=p;
}

int Partition(int m, int p) {
    int v = a[m];
    int i = m;
    int j = p;
    do {
        do {
            i = i + 1;
        } while (a[i] <= v);

        do {
            j = j - 1;
        } while (a[j] > v);

        if (i < j) {
            Interchange(i, j);
        }
    } while (i < j);

    a[m] = a[j];
    a[j] = v;
    return j;
}

void QuickSort(int p,int q){
    if(p<q){
        int j=Partition(p,q+1);
        QuickSort(p,j-1);
        QuickSort(j+1,q);
    }
}

int main(){
    int n;
    cout<<"Enter the array size: \n";
    cin>>n;
    cout<<"Enter the array element: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=100000;
    int m=0,p=n;
    QuickSort(m,p);
    cout<<"Here the sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}