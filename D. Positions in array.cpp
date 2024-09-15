#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    long A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    // Iterate through the array and check each element
    for (int i = 0; i < N; i++) {
        if (A[i] <= 10) {

            // Print the position (0-based) and the value
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }

    return 0;
}
