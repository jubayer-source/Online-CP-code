#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        unsigned long long factorial = 1;

        // Calculate factorial of N
        for (int j = 1; j <= N; ++j)
        {
            factorial *= j;
        }

        cout << factorial << endl;
    }

    return 0;
}
