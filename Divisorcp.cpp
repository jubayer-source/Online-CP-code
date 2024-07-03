
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    for ( int Divisor = 1; Divisor <= N; Divisor++)
    {
        if ( N % Divisor == 0)
        {
            cout << Divisor << endl;
        }
    }









    return 0;
}
