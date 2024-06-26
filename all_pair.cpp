#include<bits/stdc++.h>
using namespace std;
const int N=100;
const int INF=1e9+10;

int main(){
    int dist[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                dist[i][j]=0;
            }
            else{
                dist[i][j]=INF;
            }
        }
    }

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        dist[x][y]=w;
    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][k]!=INF && dist[k][j]!=INF){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dist[i][j]==INF){
                cout<<"INF ";
            }
            else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}