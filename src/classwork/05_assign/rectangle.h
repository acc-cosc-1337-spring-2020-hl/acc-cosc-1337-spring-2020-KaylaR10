#include<iostream>
using namespace std;
/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
class Rectangl
{
public:
    Rectangl(int w, int h): width{ w }, height { h } {}
    int get_Area();
    friend std::ostream& operator<<(std::ostream& out, const Rectangl& rec);
private:
    int calculate_Area();
    int width;
    int height;
    int area = calculate_Area();
};
