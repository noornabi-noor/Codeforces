#include <bits/stdc++.h>
using namespace std;
#define int long long 


int32_t main() {
    string s;
    cin>>s;
    int n=s.size();
    int mx1=INT_MIN,mx2=INT_MIN,mx3=INT_MIN,mx4=INT_MIN,r1=INT_MIN,r2=INT_MIN,r3=INT_MIN;
    int c1=0,c2=0,c3=0,c4=0;

    for(int i=0;i<n;i++){
        if('G'==s[i]){
            c1++;
        }
        else{
            c1=0;
        }
        mx1=max(mx1,c1);
    }

    for(int i=0;i<n;i++){
        if('T'==s[i]){
            c2++;
            //continue;
        }
        else{
            c2=0;
        }
        mx2=max(mx2,c2);
    }

    for(int i=0;i<n;i++){
        if('A'==s[i]){
            c3++;
            //continue;
        }
        else{
            c3=0;
        }
        mx3=max(mx3,c3);
    }

    for(int i=0;i<n;i++){
        if('C'==s[i]){
            c4++;
            //continue;
        }
        else{
            c4=0;
        }
        mx4=max(mx4,c4);
    }
    r1=max(mx1,mx2);
    r2=max(r1,mx3);
    r3=max(r2,mx4);
    cout<<r3<<"\n";
}