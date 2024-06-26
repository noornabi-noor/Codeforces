#include<bits/stdc++.h>
using namespace std;

void recursion(string s,int i,string cur){
    if(i==s.length()){
        cout<<cur<<"\n";
        return;
    }
    recursion(s,i+1,cur+s[i]);
    recursion(s,i+1,cur);
}

int main(){
    string s;
    cin>>s;
    int i=0;
    string cur;
    recursion(s,i,cur);
    return 0;
}