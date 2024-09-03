#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Define a plain array to store the elements
    int *A = new int[N];
    
    for( int i = 0; i < N; i++){
        cin >> A[i];
    }
    long X;
    cin >> X;
    
    for ( int i = 0; i < N; i++){
        if(A[i]== X){
            cout << i <<endl;
            delete[] A; // Don't forget to free the allocated memory
            return 0;
        }
    }
    
    cout << -1 <<endl;
    delete[] A; // Free the allocated memory
    
return 0;
}
