//write include statemetns
#include<iostream>
#include "rectangle.h"
#include<vector>

using std::vector;
using std::cout;

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
    vector<Rectangle> Rectangles{ Rectangle(4,5), Rectangle(10,10), Rectangle(100,10) };

	auto total{ 0 };

    for (auto rect : Rectangles) {
        cout << rect.get_Area() << "\n";
		total += rect.get_Area();
    }

	cout << "Area: " << total;
   

    return 0;
}
