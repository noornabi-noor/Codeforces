// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// struct Student {
//     int roll;
//     string name;
//     int room;
//     string gender;
// };

// // Comparator function to sort students by roll number
// bool compareStudents(const Student& a, const Student& b) {
//     return a.roll < b.roll;
// }

// int main() {
//     int t;
//     cin >> t;

//     for (int tc = 1; tc <= t; ++tc) {
//         int n, q;
//         cin >> n >> q;

//         vector<Student> students(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> students[i].roll >> students[i].name >> students[i].room >> students[i].gender;
//         }

//         sort(students.begin(), students.end(), compareStudents);

//         cout << "Case #" << tc << ":" << endl;

//         for (int i = 1; i <= q; ++i) {
//             int queryRoom;
//             cin >> queryRoom;

//             cout << "Query #" << i << ":" << endl;

//             bool found = false;
//             for (const auto& student : students) {
//                 if (student.room == queryRoom) {
//                     cout << student.roll << " " << student.name << " " << student.gender << endl;
//                     found = true;
//                 }
//             }

//             if (!found) {
//                 cout << "No Student" << endl;
//             }
//         }
//     }

//     return 0;
// }




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int roll;
    string name;
    string gender;
};

// Comparator function to sort students by roll number
bool compareStudents(const Student& a, const Student& b) {
    return a.roll < b.roll;
}

int main() {
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; ++tc) {
        int n, q;
        cin >> n >> q;

        vector<vector<Student>> rooms(1001); // Assuming maximum room number is 1000

        for (int i = 0; i < n; ++i) {
            int roll, room;
            string name, gender;
            cin >> roll >> name >> room >> gender;
            rooms[room].push_back({roll, name, gender});
        }

        for (int i = 1; i <= q; ++i) {
            int queryRoom;
            cin >> queryRoom;

            cout << "Case #" << tc << ":" << endl;
            cout << "Query #" << i << ":" << endl;

            if (rooms[queryRoom].empty()) {
                cout << "No Student" << endl;
            } else {
                sort(rooms[queryRoom].begin(), rooms[queryRoom].end(), compareStudents);
                for (const auto& student : rooms[queryRoom]) {
                    cout << student.roll << " " << student.name << " " << student.gender << endl;
                }
            }
        }
    }

    return 0;
}

