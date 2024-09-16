#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);  // One-dimensional array to store N elements

        // Input array elements
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Iterate through all sub-arrays
        for (int i = 0; i < N; i++) {
            int maxInSubArray = A[i];  // Start with the first element of the sub-array as the max
            for (int j = i; j < N; j++) {
                // Update the maximum element of the sub-array
                if (A[j] > maxInSubArray) {
                    maxInSubArray = A[j];
                }
                // Print the maximum of the current sub-array
                cout << maxInSubArray << " ";
            }
        }
        cout << endl;  // Print a newline after each test case
    }

    return 0;
}

