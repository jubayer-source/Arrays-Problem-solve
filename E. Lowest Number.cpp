#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Initialize with the first element
    long min_value = A[0];
    int min_position = 1; // 1-based indexing


    // Iterate through the array to find the minimum value and its position
    for (int i = 1; i < N; i++) {
        if (A[i] < min_value) {
            min_value = A[i];
            min_position = i + 1; // Update position to 1-based indexing
        }
    }

    // Output the minimum value and its position
    cout << min_value << " " << min_position << endl;

    return 0;
}
