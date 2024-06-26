// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of Processes: ";
//     cin >> n;

//     int a[n], b[n], c[n], t[n], w[n];
//     int p[n], t_tat = 0, t_wt = 0;

//     cout << "Enter the Arrival Time:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P" << i + 1 << ": ";
//         cin >> a[i];
//         p[i] = i + 1;
//     }

//     cout << "Enter the Burst Time:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P" << i + 1 << ": ";
//         cin >> b[i];
//     }

//     // Sorting based on arrival time
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (a[i] > a[j]) {
//                 swap(a[i], a[j]);
//                 swap(b[i], b[j]);
//                 swap(p[i], p[j]);
//             }
//         }
//     }

//     int completed = 0, currentTime = 0;
//     bool isDone[n] = {false};

//     while (completed != n) {
//         int minIndex = -1;
//         int minBurst = INT_MAX;

//         for (int i = 0; i < n; i++) {
//             if (a[i] <= currentTime && !isDone[i] && b[i] < minBurst) {
//                 minBurst = b[i];
//                 minIndex = i;
//             }
//         }

//         if (minIndex != -1) {
//             currentTime += b[minIndex];
//             c[minIndex] = currentTime;
//             t[minIndex] = c[minIndex] - a[minIndex];
//             w[minIndex] = t[minIndex] - b[minIndex];

//             t_tat += t[minIndex];
//             t_wt += w[minIndex];

//             isDone[minIndex] = true;
//             completed++;
//         } else {
//             currentTime++;
//         }
//     }

//     cout << "Process\t\tArrival Time\tBurst Time\tTurnaround Time\tWaiting Time\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P[" << p[i] << "]\t\t" << a[i] << "\t\t" << b[i] << "\t\t" << t[i] << "\t\t" << w[i] << "\n";
//     }
//     cout << "Average Turnaround Time: " << (float)t_tat / n << "\n";
//     cout << "Average Waiting Time: " << (float)t_wt / n << "\n";

//     return 0;
// }
















// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of Processes: ";
//     cin >> n;

//     vector<int> arrivalTime(n), burstTime(n), completionTime(n), turnaroundTime(n), waitingTime(n);
//     vector<int> process(n), sortedIndex(n);
//     int totalTurnaroundTime = 0, totalWaitingTime = 0;

//     cout << "Enter the Arrival Time:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P" << i + 1 << ": ";
//         cin >> arrivalTime[i];
//         process[i] = i + 1;
//         sortedIndex[i] = i;
//     }

//     cout << "Enter the Burst Time:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P" << i + 1 << ": ";
//         cin >> burstTime[i];
//     }

//     // Sort processes by arrival time, but keep the original index to refer to processes
//     sort(sortedIndex.begin(), sortedIndex.end(), [&](int i, int j) {
//         return arrivalTime[i] < arrivalTime[j];
//     });

//     int completed = 0, currentTime = 0;
//     vector<bool> isDone(n, false);

//     while (completed != n) {
//         int minIndex = -1;
//         int minBurst = INT_MAX;

//         for (int i = 0; i < n; i++) {
//             if (arrivalTime[sortedIndex[i]] <= currentTime && !isDone[sortedIndex[i]] && burstTime[sortedIndex[i]] < minBurst) {
//                 minBurst = burstTime[sortedIndex[i]];
//                 minIndex = sortedIndex[i];
//             }
//         }

//         if (minIndex != -1) {
//             currentTime += burstTime[minIndex];
//             completionTime[minIndex] = currentTime;
//             turnaroundTime[minIndex] = completionTime[minIndex] - arrivalTime[minIndex];
//             waitingTime[minIndex] = turnaroundTime[minIndex] - burstTime[minIndex];

//             totalTurnaroundTime += turnaroundTime[minIndex];
//             totalWaitingTime += waitingTime[minIndex];

//             isDone[minIndex] = true;
//             completed++;
//         } else {
//             currentTime++;
//         }
//     }

//     cout << "Process\t\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P[" << process[i] << "]\t\t" << arrivalTime[i] << "\t\t" << burstTime[i] << "\t\t" <<completionTime[i]<<"\t\t"<< turnaroundTime[i] << "\t\t" << waitingTime[i] << "\n";
//     }
//     cout << "Average Turnaround Time: " << (float)totalTurnaroundTime / n << "\n";
//     cout << "Average Waiting Time: " << (float)totalWaitingTime / n << "\n";

//     return 0;
// }














// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of Processes: ";
//     cin >> n;

//     vector<int> arrivalTime(n), burstTime(n), completionTime(n), turnaroundTime(n), waitingTime(n), process(n);
//     int totalTurnaroundTime = 0, totalWaitingTime = 0;

//     cout << "Enter the Arrival Time:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P" << i + 1 << ": ";
//         cin >> arrivalTime[i];
//         process[i] = i + 1; // Process IDs
//     }

//     cout << "Enter the Burst Time:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P" << i + 1 << ": ";
//         cin >> burstTime[i];
//     }

//     // Sort processes by arrival time using process index
//     vector<int> sortedIndex(n);
//     for (int i = 0; i < n; i++) {
//         sortedIndex[i] = i;
//     }
//     sort(sortedIndex.begin(), sortedIndex.end(), [&](int i, int j) {
//         return arrivalTime[i] < arrivalTime[j];
//     });

//     int completed = 0, currentTime = 0;
//     vector<int> isDone(n, 0);

//     while (completed != n) {
//         int minIndex = -1;
//         int minBurst = INT_MAX;

//         for (int i = 0; i < n; i++) {
//             if (arrivalTime[sortedIndex[i]] <= currentTime && !isDone[sortedIndex[i]] && burstTime[sortedIndex[i]] < minBurst) {
//                 minBurst = burstTime[sortedIndex[i]];
//                 minIndex = sortedIndex[i];
//             }
//         }

//         if (minIndex != -1) {
//             currentTime += burstTime[minIndex];
//             completionTime[minIndex] = currentTime;
//             turnaroundTime[minIndex] = completionTime[minIndex] - arrivalTime[minIndex];
//             waitingTime[minIndex] = turnaroundTime[minIndex] - burstTime[minIndex];

//             totalTurnaroundTime += turnaroundTime[minIndex];
//             totalWaitingTime += waitingTime[minIndex];

//             isDone[minIndex] = 1;
//             completed++;
//         } else {
//             currentTime++;
//         }
//     }

//     cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n";
//     for (int i = 0; i < n; i++) {
//         cout << "P[" << process[i] << "]\t" << arrivalTime[i] << "\t\t" << burstTime[i] << "\t\t" << completionTime[i] << "\t\t" << turnaroundTime[i] << "\t\t" << waitingTime[i] << "\n";
//     }

//     cout << "Average Turnaround Time: " << (float)totalTurnaroundTime / n << "\n";
//     cout << "Average Waiting Time: " << (float)totalWaitingTime / n << "\n";

//     return 0;
// }








#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Processes: ";
    cin >> n;

    vector<int> arrivalTime(n), burstTime(n), completionTime(n), turnaroundTime(n), waitingTime(n);
    vector<int> process(n);
    int totalTurnaroundTime = 0, totalWaitingTime = 0;

    // Input arrival and burst times
    cout << "Enter the Arrival Time and Burst Time for each process:\n";
    for (int i = 0; i < n; i++) {
        process[i] = i + 1;
        cout << "P" << process[i] << " - Arrival Time: ";
        cin >> arrivalTime[i];
        cout << "P" << process[i] << " - Burst Time: ";
        cin >> burstTime[i];
    }

    // Sort by arrival time using simple bubble sort for simplicity
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrivalTime[j] > arrivalTime[j + 1]) {
                swap(arrivalTime[j], arrivalTime[j + 1]);
                swap(burstTime[j], burstTime[j + 1]);
                swap(process[j], process[j + 1]);
            }
        }
    }

    int completed = 0, currentTime = 0;
    vector<bool> isDone(n, false);

    while (completed != n) {
        int minIndex = -1;
        int minBurst = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (arrivalTime[i] <= currentTime && !isDone[i] && burstTime[i] < minBurst) {
                minBurst = burstTime[i];
                minIndex = i;
            }
        }

        if (minIndex != -1) {
            currentTime += burstTime[minIndex];
            completionTime[minIndex] = currentTime;
            turnaroundTime[minIndex] = completionTime[minIndex] - arrivalTime[minIndex];
            waitingTime[minIndex] = turnaroundTime[minIndex] - burstTime[minIndex];

            totalTurnaroundTime += turnaroundTime[minIndex];
            totalWaitingTime += waitingTime[minIndex];

            isDone[minIndex] = true;
            completed++;
        } else {
            currentTime++;
        }
    }

    // Display the results
    cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P[" << process[i] << "]\t" << arrivalTime[i] << "\t\t" << burstTime[i] << "\t\t" << completionTime[i] << "\t\t" << turnaroundTime[i] << "\t\t" << waitingTime[i] << "\n";
    }

    cout << "Average Turnaround Time: " << (float)totalTurnaroundTime / n << "\n";
    cout << "Average Waiting Time: " << (float)totalWaitingTime / n << "\n";

    return 0;
}
