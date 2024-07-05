#include <bits/stdc++.h>

using namespace std;
int main()
{
    int N;
    cin >> N;

    int year = N / 365;
    N %=365;

    int month = N / 30;
    N %= 30;

    int day = N;

    cout << year << " years" <<endl;
    cout << month << " months"<< endl;
    cout << day << " days";




    return 0;
}
