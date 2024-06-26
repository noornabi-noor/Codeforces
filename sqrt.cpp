#include<bits/stdc++.h>
using namespace std;

int SQrt(int n){

    if(n==0 || n==1) return n;

    int l=1,h=(n/2),res=0;

    while(l<=h){
        int mid=(l+h)/2;

        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            l=mid+1;
            res= mid;
        }
        else {
            h=mid-1;
        }

    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int ans=SQrt(n);
    cout<<ans<<"\n";
    return 0;
}