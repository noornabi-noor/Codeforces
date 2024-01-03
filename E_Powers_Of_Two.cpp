#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> powersOfTwo;
    int power = 1;

    // Find the powers of two needed to represent n
    while (n >= 1) {
        powersOfTwo.push_back((power));
        n -= std::min(n, power);
        power *= 2;
    }

    // Check if the number of powers of two is equal to k
    if (powersOfTwo.size() < k) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
        for (int i = 0; i <k ; ++i) {
            std::cout << powersOfTwo[i] << " ";
        }
        std::cout << n << "\n";
    }

    return 0;
}

