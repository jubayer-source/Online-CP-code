#include <bits/stdc++.h>
using namespace std;

int main()
{

    string expression;
    getline(cin, expression);


    int A, B, C;
    char S, Q;

    stringstream ss(expression);
    ss >> A >> S >> B >> Q >> C;


    int result;
    switch (S)
    {
        case '+':
            result = A + B;
            break;

        case '-':
            result = A - B;
            break;

        case '*':
            result = A * B;
            break;
    }



    if (result == C)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }


    return 0;
}
