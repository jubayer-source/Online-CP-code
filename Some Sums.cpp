#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N, A , B;
    cin >> N >> A >> B;


    int total_sum = 0;

    // Iterate through all numbers from 1 to N
    for ( int i = 1; i <= N; i++)
    {
        int number = i;
        int digit_sum = 0;

        // calculate the sum of digits of the current number
        while (number > 0)
        {
            digit_sum += number % 10;
            number /= 10;

        }


        //check if the sum of digits is between A and B (inclusive)
        if(digit_sum >= A && digit_sum <= B)
        {
            total_sum += i;
        }


    }

    cout << total_sum <<endl;




    return 0;
}
