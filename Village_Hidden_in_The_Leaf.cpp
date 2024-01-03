#include <bits/stdc++.h>



using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> houses(n);
        for (int i = 0; i < n; i++) {
            cin >> houses[i];
        }
        
        for (int i = 0; i < q; i++) {
            int type, x;
            cin >> type >> x;
            
            if (type == 1) {
                int count = 0;
                if (!isPrime(houses[x - 1])) {
                    count++;
                }
                int left = x - 1;
                int right = x - 1;
                
                while (left >= 0 && right < n) {
                    left--;
                    right++;
                    
                    if (left >= 0 && !isPrime(houses[left])) {
                        count++;
                    }
                    if (right < n && !isPrime(houses[right])) {
                        count++;
                    }
                }
                cout << count << endl;
            } else {
                houses[x - 1] = 1;
            }
        }
    }
    
    return 0;
}
