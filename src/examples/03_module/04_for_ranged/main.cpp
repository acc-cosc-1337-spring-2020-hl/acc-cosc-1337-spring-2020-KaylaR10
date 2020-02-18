 
#include "for_ranged.h"

int main() 
{
	string str = "test";

	loop_string_w_index(str);
	cout << str;
	loop_string_w_auto(str);
	cout << str;

	return 0;
}
