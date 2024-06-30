#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n;
   cin >> n;

   bool hasEvenNumber = false;   // Initialize a flag to check if there are even numbers

   for(int i = 2; i <= n; i += 2)
   {
       cout << i <<endl;    // Initialize a flag to check if there are even numbers
       hasEvenNumber = true;   // Set the flag to true as we have found an even number
   }



   if(!hasEvenNumber) // If no even numbers were found, print -1
   {
       cout << -1 <<endl;
   }

return 0;
}
