// #include <bits/stdc++.h>
// using namespace std;

// const int n=3;
// double w[]={15, 34, 40};
// double x[3];

// void GreadyKnapsack(int n,int m){
//     int i;
//     for(i=0;i<n;i++) x[i]=0.0;  
//     int U=m;
//     for(i=0;i<n;i++){
//         if(w[i]>U) break;
//         x[i]=1.0;
//         U=U-w[i];
//     }
//     if(i<=n) x[i]=(double)U/w[i];  
// }

// int main(){
//     int m=18;
//     GreadyKnapsack(n,m);
//     for(int i=0;i<n;i++){
//         cout<<"x"<<i<<" "<<x[i]<<"\n";
//     }
//     cout<<"\n";
// }


#include<bits/stdc++.h>
using namespace std;

int w[10];
double x[10];

void Knapsack(int n, int m){
    int i;
    int U=m;
    for(i=0;i<n;i++){
        x[i]=0.0;
    }
    for(i=0;i<n;i++){
        if(w[i]>U){
            break;
        }
        x[i]=1.0;
        U=U-w[i];
    }
    if(i<=n){
        x[i]=(double)U/w[i];
    }
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int m;
    cout<<"Enter the total weight : ";
    cin>>m;
    cout<<"Enter the array element : ";
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    Knapsack(n-1,m);
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    return 0;
}