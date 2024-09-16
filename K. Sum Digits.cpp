#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    string digits;
    cin >> digits;


    int sum = 0;

    for( int i = 0; i < N; i++)
    {
        sum += digits[i] - '0';

        /* sum += digits[i] - '0'; THIS LINE EPLAIN Bellow;

        digits[i] - '0': Subtracting '0' from digits[i] converts the character into its corresponding integer value. For example:

    '1' - '0' gives 49 - 48 = 1.
    '3' - '0' gives 51 - 48 = 3.

sum +=: This adds the integer value of the digit to the sum.
        */


    }

    // out the total sum
    cout << sum <<endl;

return 0;
}
