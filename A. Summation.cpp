#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long sum = 0;

    for( int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;

        sum = sum + x;
    }

    cout << abs(sum) <<endl;


return 0;
}
