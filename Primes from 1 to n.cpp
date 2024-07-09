#include <bits/stdc++.h>
using namespace std;
int main(){
     int N;

     cout << "Enter a number: ";
     cin >> N;

     for ( int number = 2; number <= N; number++){
        bool isPrime = true;


        for ( int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime){
            cout << number << " ";
        }


     }

     return 0;
}
