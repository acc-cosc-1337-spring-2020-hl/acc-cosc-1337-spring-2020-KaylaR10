#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get Area function")
{
    Rectangl Rect1(4, 5);
    
    REQUIRE(Rect1.get_Area() == 20);
    
   
    
}

