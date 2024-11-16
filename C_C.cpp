#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int minMovesToKillMonster(int H) {
    queue<pair<int, int>> q; // {current health, current attack power}
    q.push({H, 1});
    vector<int> visited(H + 1, 0); // To avoid revisiting the same health
    visited[H] = 1;
    
    int moves = 0;

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            int health = q.front().first;
            int attackPower = q.front().second;
            q.pop();

            if (health == 0) return moves;

            // Regular attack
            int newHealth = health - attackPower;
            if (newHealth >= 0 && !visited[newHealth]) {
                q.push({newHealth, attackPower * 2});
                visited[newHealth] = 1;
            }

            // Special move: Use a prime number to attack
            if (moves == 0) { // Special move can only be used once
                for (int p = 2; p <= health; ++p) {
                    if (isPrime(p)) {
                        newHealth = health - p;
                        if (newHealth >= 0 && !visited[newHealth]) {
                            q.push({newHealth, attackPower});
                            visited[newHealth] = 1;
                        }
                    }
                }
            }
        }
        moves++;
    }

    return -1; // If it's impossible to exactly match H
}

int main() {
    int H;
    cin >> H;

    int result = minMovesToKillMonster(H);
    cout << result << "\n";

    return 0;
}
