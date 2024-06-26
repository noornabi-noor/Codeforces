#include <iostream>
using namespace std;

int main() {
    int a, b,k;
    cin >> a >> b;
    cin>>k;
    if(abs(a-b)>k){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    

    return 0;
}
