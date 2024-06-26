#include<bits/stdc++.h>
using namespace std;

const int mx=100;
int a[]={45,55,12,20,100,110,85,10};

void interchange(int l,int h){
    int tmp=a[l];
    a[l]=a[h];
    a[h]=tmp;
}

int partition(int m,int p){
    int v=a[m],i=m-1,j=p+1;
    do{
        do{
            i++;
        }while(a[i]<=v);
        do{
            j--;
        }while(a[j]>=v);
        if(i<j){
            interchange(i,j);
        }
    }while(i<=j);
    a[m]=a[j];
    a[j]=v;
    return j;

}

void quick(int l,int h){
    int pivot;
    if(l<h){
        pivot=partition(l,h);
        quick(l,pivot-1);
        quick(pivot+1,h);
    }
}

int main(){
    int n=sizeof(a)/sizeof(a[0]);
    quick(0,n-1);
    cout<<"The array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}