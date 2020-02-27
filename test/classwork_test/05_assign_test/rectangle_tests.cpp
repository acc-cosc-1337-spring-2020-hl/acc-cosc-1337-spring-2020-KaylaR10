#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include"rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get Area function")
{
    Rectangle Rect1(4, 5);
    
    REQUIRE(Rect1.get_Area() == 20);
    
   Rectangle Rect2(10, 10);
         
    REQUIRE(Rect2.get_Area() == 100);
      
    Rectangle Rect3(100, 10);
         
    REQUIRE(Rect3.get_Area() == 1000);
   
    
}

