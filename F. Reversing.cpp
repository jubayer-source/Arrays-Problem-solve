#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;  // Reading the size of the array

    long A[N];  // Declaring the array

    // Reading the array elements
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Printing the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }

    return 0;
}
