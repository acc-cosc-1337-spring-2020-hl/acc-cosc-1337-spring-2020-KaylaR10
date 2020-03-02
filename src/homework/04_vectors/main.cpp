#include<iostream>
#include <string>
#include "vectors.h"


using std::vector;
using std::cin;
using std::cout;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/


int main()
{
    


    vector<int> v_numbers{ 8, 4, 20, 88, 66, 99 };
    int op = 0;
    cout << "Enter 1 for Get Max from vector and 2 for Get primes:";
    cin >> op;
    int max = get_max_from_vector(v_numbers);
    while (op == 1 || op == 2)
    {
        if (op == 1)
        {
            cout << "Maximum of given vector is:"<< max << "\n";
            cin >> op;
        }
        else if (op == 2)

        {
            int input = 0;
            cout << "Enter a number to get vector of primes:";
            cin >> input;
            
            vector<int> output = vector_of_primes(input);
            
            cout << "The prime numbers up to " << input << " are: ";
            
            for (auto i : output)
            {
                cout << i << " ";
            }
            cout << "\n";
            cout << "Invalid operation, you can only enter 1 or 2";
            cin >> op;
        }
    }
    
    
    return 0;

}
