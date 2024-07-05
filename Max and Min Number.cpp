
#include <bits/stdc++.h>
// Includes algorithm library for min and max functions
// #include <algorithm>

using namespace std;

int main ()
{
    int A, B, C;
    cin >> A >> B >> C;

// Finds the minimum value among A, B, and C
    int minimum = min({A, B, C });

// Finds the maximum value among A, B, and C
    int maximum = max({A, B, C });


    cout << minimum << " " << maximum;

}
