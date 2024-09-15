#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>> N;

    long A[N];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // 1st work: find the minimum element
    long minElement = A[0];
    for( int i = 0 ; i < N; i++)
    {
        if( A[i] < minElement )
        {
            minElement = A[i];
        }
    }


    // 2nd work: count the frequency of minElement
    int frequency = 0;
    for( int i = 0; i < N; i++)
    {
        if( A[i] == minElement)
        {
            frequency++;
        }
    }

    // 3rd work: check the frequency odd or even
    if( frequency % 2 == 1)
    {
        cout << "Lucky" <<endl;
    }
    else{
        cout << "Unlucky" <<endl;
    }



return 0;
}
