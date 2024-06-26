#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int zzzz; // t
    cin >> zzzz;

    while (zzzz--) {
        int aaaaa, bbbbb; // n, m
        cin >> aaaaa >> bbbbb;
        string sssss; // s
        cin >> sssss;
        vector<int> ccccc(bbbbb); // l
        for (int &d : ccccc) { // d is l[i]
            cin >> d;
        }
        string eeeee; // c
        cin >> eeeee;

        set<int> fffff(ccccc.begin(), ccccc.end()); // l1 (unique values from l)
        vector<int> ggggg(fffff.begin(), fffff.end());
        sort(ggggg.begin(), ggggg.end());
        sort(eeeee.begin(), eeeee.end());

        map<int, char> hhhhh; // cnt
        for (size_t i = 0; i < ggggg.size(); ++i) {
            hhhhh[ggggg[i]] = eeeee[i];
        }

        for (const auto &kv : hhhhh) {
            sssss[kv.first - 1] = kv.second;
        }

        cout << sssss << endl;
    }

    return 0;
}
