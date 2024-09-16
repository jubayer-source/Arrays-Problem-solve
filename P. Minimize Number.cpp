#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int A[N];
    for ( int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int operation = 0;


    while (true){
            bool allEven = true;

        for(int i = 0; i < N; i++){
            if( A[i] % 2 != 0){
                allEven = false;
                break;
            }
        }
        if(!allEven){
            break;
        }

        for( int i = 0; i < N; i++)
        {
            A[i] /= 2;
        }

        operation++;
    }

    cout << operation <<endl;



return 0;
}
