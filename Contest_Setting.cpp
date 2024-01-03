#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int budget, costPerProblem;
        cin >> budget >> costPerProblem;

        int maxParticipants = 0;

        for (int problemsRound1 = 1; problemsRound1 <= budget / costPerProblem; problemsRound1++) {
            int costRound1 = problemsRound1 * costPerProblem;

            for (int problemsRound2 = 1; problemsRound2 <= budget / costPerProblem; problemsRound2++) {
                int costRound2 = problemsRound2 * costPerProblem;

                // Calculate the total cost of both rounds
                int totalCost = costRound1 + costRound2 + (problemsRound1 + problemsRound2);

                // Check if the total cost is within the budget
                if (totalCost <= budget) {
                    // Calculate the maximum number of participants based on the problem constraints
                    int participants = problemsRound1 + problemsRound2;

                    // Update the maximum participants if a larger number is found
                    maxParticipants = max(maxParticipants, participants);
                }
            }
        }

        cout << maxParticipants << endl;
    }

    return 0;
}
