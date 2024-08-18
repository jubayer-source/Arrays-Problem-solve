#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    long A[N];
    for(int i = 0; i < N; i++) // 0-based indexing
    {
        cin >> A[i];


        if(A[i] > 0)
        {
            cout << "1" << " ";
        }
        else if(A[i] < 0)
        {
            cout << "2" << " ";
        }
        else
        {
            cout << "0" << " ";
        }
    }

    return 0;
}
