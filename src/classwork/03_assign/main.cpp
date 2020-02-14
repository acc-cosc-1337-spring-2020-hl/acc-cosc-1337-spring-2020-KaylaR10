//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main()
{
	int num;
	do
	{
		cout << "Enter a number (negative number to exit):";
		cin >> num;
		if (num >=0) 
		{
			cout << "Factorial of " << num << "is" << factorial(num) << "\n";
		}
	} while (num >=0);

	return 0;
}

