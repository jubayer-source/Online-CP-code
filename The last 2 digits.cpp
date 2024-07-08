#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Perform multiplication with modulo to avoid overflow

    long long result = 1;
    result = (result * A)%100;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;


    // Extract the last two digits
    int last_two_digit = result % 100;

    // Ensure the output is two digits
    if (last_two_digit < 10) {
        cout << "0"; // Print a leading '0' if necessary
    }
    cout << last_two_digit << endl;

    return 0;
}
