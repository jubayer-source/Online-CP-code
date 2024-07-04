#include <iostream>
#include <string>
using namespace std;

int main() {

    string expression;
    cin >> expression;


    int A, B;
    char S;

    size_t pos = expression.find_first_of("+-*/");

    A = stoi(expression.substr(0, pos));
    S = expression[pos];
    B = stoi(expression.substr(pos + 1));

    switch (S)
    {
    case '+':
        cout << A + B;
        break;

    case '-':
        cout << A - B;
        break;

    case '*':
        cout << A * B;
        break;

    case '/':
        cout << A / B;

    }




    return 0;
}
