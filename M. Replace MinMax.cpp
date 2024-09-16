#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    // Input the array
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Initialize variables to find minimum and maximum
    int minIndex = 0, maxIndex = 0;

    // Find indices of the minimum and maximum elements
    for (int i = 1; i < N; i++) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap the minimum and maximum elements
    swap(A[minIndex], A[maxIndex]);

    // Output the modified array
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
