#include <bits/stdc++.h>   //#include <unordered_set>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

// Using a set to store unique elements for quick lookup
    unordered_set<long> A;
    long num;


    // reading the whole elements from this set
    for( int i = 0; i < N; i++)
    {
        cin >> num;
        A.insert(num);
    }

    // queries processing and output build
    for( int i = 0 ; i < Q; i++)
    {
        long X;
        cin >> X;

        //set if X esist ? in the set
        if( A.find(X) != A.end()){
            cout << "found" <<endl;
        }
        else{
            cout << "not found" <<endl;
        }
    }


return 0;
}
