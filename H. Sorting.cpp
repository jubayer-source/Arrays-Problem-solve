#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    long A[N];
    for(int i = 0; i<N; i++)
    {
        cin>> A[i];
    }

    for( int i = 0; i < N - 1; i++)
    {
        for( int j = 0; j < N - i - 1; j++)
        {
            if( A[j]> A[j+1]){

                // swap the element in proper place
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    // Now sorted array is :
    for( int i =0 ; i < N; i++)
    {
        cout << A[i] << " ";
    }

return 0;
}
