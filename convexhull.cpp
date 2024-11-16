// #include <bits/stdc++.h>
// using namespace std;

// bool compare(pair<int, int> a, pair<int, int> b) {
//     if (a.second != b.second)
//         return a.second < b.second;
//     return a.first < b.first;
// }

// int main() {
//     int n;
//     while(cin >> n && n != 0){

    
//         vector<pair<int, int>> v(n);
//         for (int i = 0; i < n; i++) {
//             int x, y;
//             cin >> x >> y;
//             v[i] = {x, y};
//         }

//         sort(v.begin(), v.end(), compare);

//         vector<pair<int, int>> v1(n * 2);
//         int j = 0;

//         for (int i = 0; i < n; i++) {
//             while (j >= 2) {
//                 double triArea = (v1[j - 2].first * (v1[j - 1].second - v[i].second)) +
//                                 (v1[j - 1].first * (v[i].second - v1[j - 2].second)) +
//                                 (v[i].first * (v1[j - 2].second - v1[j - 1].second));
//                 if (triArea > 0) {
//                     break; 
//                 }
//                 j--; 
//             }
//             v1[j++] = v[i];
//         }

    
//         int lowerHullSize = j; 
//         for (int i = n - 2; i >= 0; i--) {
//             while (j > lowerHullSize) {
//                 double triArea = (v1[j - 2].first * (v1[j - 1].second - v[i].second)) +
//                                 (v1[j - 1].first * (v[i].second - v1[j - 2].second)) +
//                                 (v[i].first * (v1[j - 2].second - v1[j - 1].second));
//                 if (triArea > 0) {
//                     break; 
//                 }
//                 j--; 
//             }
//             v1[j++] = v[i];
//         }

//         v1.resize(j - 1);

//         set<pair<int, int>> uniquePoints(v1.begin(), v1.end());

//         cout<<uniquePoints.size()<<"\n";

//         for (auto u : uniquePoints) {
//             cout << u.first << " " << u.second << "\n";
//         }

//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// // Cross product to determine the orientation of the turn
// // Returns a positive value for counterclockwise, negative for clockwise, and 0 for collinear
// int crossProduct(pair<int, int>& o, pair<int, int>& a, pair<int, int>& b) {
//     return (a.first - o.first) * (b.second - o.second) - (a.second - o.second) * (b.first - o.first);
// }

// // Function to compute the convex hull using Andrew's monotone chain algorithm
// vector<pair<int, int>> convexHull(vector<pair<int, int>>& points) {
//     // Sort the points first by x, then by y if x is equal
//     sort(points.begin(), points.end());

//     vector<pair<int, int>> lower, upper;

//     // Build the lower hull
//     for (auto& p : points) {
//         while (lower.size() >= 2 && crossProduct(lower[lower.size() - 2], lower[lower.size() - 1], p) <= 0)
//             lower.pop_back();
//         lower.push_back(p);
//     }

//     // Build the upper hull
//     for (int i = points.size() - 1; i >= 0; --i) {
//         while (upper.size() >= 2 && crossProduct(upper[upper.size() - 2], upper[upper.size() - 1], points[i]) <= 0)
//             upper.pop_back();
//         upper.push_back(points[i]);
//     }

//     // Remove the last point of each half because it's repeated at the beginning of the other half
//     lower.pop_back();
//     upper.pop_back();

//     // Combine the two halves to get the convex hull
//     lower.insert(lower.end(), upper.begin(), upper.end());

//     return lower;
// }

// int main() {
//     int n;

//     while (cin >> n && n != 0) {
//         vector<pair<int, int>> points(n);

//         // Read the points
//         for (int i = 0; i < n; i++) {
//             cin >> points[i].first >> points[i].second;
//         }

//         // Compute the convex hull
//         vector<pair<int, int>> hull = convexHull(points);

//         set<pair<int, int>> uniquePoints(hull.begin(), hull.end());

//         // Output the result
//         cout << uniquePoints.size() << "\n";
//         for (auto& p : uniquePoints) {
//             cout << p.first << " " << p.second << "\n";
//         }
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

struct pt {
    double x, y;

    // Define the comparison operator for pt to store in a set
    bool operator<(const pt& other) const {
        return tie(x, y) < tie(other.x, other.y);
    }
};

int orientation(pt a, pt b, pt c) {
    double v = a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y);
    if (v < 0) return -1; // clockwise
    if (v > 0) return +1; // counter-clockwise
    return 0; // collinear
}

bool cw(pt a, pt b, pt c, bool include_collinear) {
    int o = orientation(a, b, c);
    return o < 0 || (include_collinear && o == 0);
}

bool ccw(pt a, pt b, pt c, bool include_collinear) {
    int o = orientation(a, b, c);
    return o > 0 || (include_collinear && o == 0);
}

void convex_hull(vector<pt>& a, bool include_collinear = false) {
    if (a.size() == 1)
        return;

    // Sort points lexicographically (first by x, then by y)
    sort(a.begin(), a.end(), [](pt a, pt b) {
        return make_pair(a.x, a.y) < make_pair(b.x, b.y);
    });

    pt p1 = a[0], p2 = a.back();
    vector<pt> up, down;
    up.push_back(p1);
    down.push_back(p1);

    // Build upper and lower hulls
    for (int i = 1; i < (int)a.size(); i++) {
        if (i == a.size() - 1 || cw(p1, a[i], p2, include_collinear)) {
            while (up.size() >= 2 && !cw(up[up.size()-2], up[up.size()-1], a[i], include_collinear))
                up.pop_back();
            up.push_back(a[i]);
        }
        if (i == a.size() - 1 || ccw(p1, a[i], p2, include_collinear)) {
            while (down.size() >= 2 && !ccw(down[down.size()-2], down[down.size()-1], a[i], include_collinear))
                down.pop_back();
            down.push_back(a[i]);
        }
    }

    if (include_collinear && up.size() == a.size()) {
        reverse(a.begin(), a.end());
        return;
    }

    // Combine the two hulls to form the complete convex hull
    a.clear();
    for (int i = 0; i < (int)up.size(); i++)
        a.push_back(up[i]);
    for (int i = down.size() - 2; i > 0; i--)
        a.push_back(down[i]);
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<pt> points(n);
        
        // Read the points
        for (int i = 0; i < n; i++) {
            cin >> points[i].x >> points[i].y;
        }

        // Compute the convex hull
        convex_hull(points);

        // Use set<pt> to store unique points (eliminating duplicates)
        set<pt> uniquePoints(points.begin(), points.end());

        // Output the result
        cout << uniquePoints.size() << "\n";
        for (auto& p : uniquePoints) {
            cout << p.x << " " << p.y << "\n";
        }
    }

    return 0;
}
