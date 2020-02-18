#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "for_ranged.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_of_squares function") {
	REQUIRE(sum_of_squares(5) == 55);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(2) == 5);
}

TEST_CASE("Test val and ref function") {
	int num1 = 5; int num2 = 10;
	pass_by_val_and_ref(num1, &num2);
	REQUIRE(num1 == 5);
	REQUIRE(num2 == 50);
}

TEST_CASE("Test for range loop by ref") {
	string name = "Joe";
	loop_string_w_auto_ref(name);
	REQUIRE(name == "zzz");
}
