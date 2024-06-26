#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << -1 << endl; 
    } else {
        cout << a % b << endl; 
    }

    return 0;
}