#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    if( S[A] != '-'){
        cout << "No" <<endl;
        return 0;
    }

    bool isValid = true;

    for( int i = 0; i < A; i++){
        if( !isdigit(S[i])){
            isValid = false;
            break;
        }
    }

    for( int i = A+1; i < A+B+1; i++)
    {
        if(!isdigit(S[i])){
            isValid = false;
            break;
        }
    }

    if(isValid){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" <<endl;
    }


return 0;
}
