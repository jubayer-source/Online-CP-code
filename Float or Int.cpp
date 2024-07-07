#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    size_t decimal_pos = input.find('.');


      // it's an integer, because decimal point found,
    if ( decimal_pos == string :: npos)
    {
        cout << "int " << input;
    }

    else
    {

        // Decimal point found, so it's a float
        string integer_part = input.substr( 0, decimal_pos);
        string decimal_part = input.substr( decimal_pos + 1);



        // Remove trailing zeros from the decimal part
        while ( !decimal_part.empty() && decimal_part.back() == '0')
        {
            decimal_part.pop_back();
        }


        // If the decimal part is empty after removing zeros, it's effectively an integer
        if (decimal_part.empty()) {
            cout << "int " << integer_part << endl;
        } else {
            cout << "float " << integer_part << " 0." << decimal_part << endl;
        }
    }



    return 0;
}
