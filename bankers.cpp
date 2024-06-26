#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of process: ";
    cin>>n;
    int r;
    cout<<"Enter the number of resources: ";
    cin>>r;
    int alloc[n][r],max[n][r];
    cout<<"The allocation matrix:\n";
    for(int i=0;i<n;i++){
        cout<<"P"<<i<<": ";
        for(int j=0;j<r;j++){
            
            cin>>alloc[i][j];
        }
    }
    cout<<"The max need matrix:\n";
    for(int i=0;i<n;i++){
        cout<<"P"<<i<<": ";
        for(int j=0;j<r;j++){
            
            cin>>max[i][j];
        }
    }
    int avail[r];
    cout<<"Enter the avaliable: ";
    for(int i=0;i<r;i++){
        cin>>avail[i];
    }
    int need[n][r];
   //calculate need matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            need[i][j]=max[i][j] - alloc[i][j];
        }
    }
    int f[n],ans[n],ind=0;
    for(int i=0;i<n;i++){
        f[i]=0;
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(f[i]==0){
                int flag=0;
                for(int j=0;j<r;j++){
                    if(need[i][j]>avail[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans[ind++]=i;
                    for(int y=0;y<r;y++){
                        avail[y]+=alloc[i][y];
                    }
                    f[i]=1;
                }
            }
        }
    }
    cout<<"The Safe Sequences is: "<<"\n";
    for(int i=0;i<n-1;i++){
        cout<<"P"<<ans[i]<<"->";
    }
    cout<<"P"<<ans[n-1];
    return 0;
}