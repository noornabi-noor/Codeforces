#include<bits/stdc++.h>
using namespace std;

inline int in(){
    int y;
    scanf("%d",&y);
    return y;
}

const int N=3e5+5;
int n,a[N],cnt[N],lst[N];

void solve(){
    n=in();

    for(int i=1;i<=n;i++){
        a[i]=in();
        cnt[a[i]]++,lst[a[i]]=i;
    }

    vector<int>ans;
    int op=-1,pre=0,pos=0;

    for(int i=1;i<=n;i++){

        if(!cnt[a[i]]){
            continue;
        }

        if(!pos||a[i]*op<a[pos]*op){
            pos=i;
        }
        
        if(i==lst[a[i]]){
            ans.push_back(a[pos]),cnt[a[pos]]=0;
            i=pos,pos=0;op*=-1;
        }

    }

    printf("%d\n",(int)ans.size());
    for(int p:ans){
        printf("%d ",p);puts("");
    }

}
int main(){
    int Te=in();
    while(Te--){
        solve();
    }
    return 0;
}