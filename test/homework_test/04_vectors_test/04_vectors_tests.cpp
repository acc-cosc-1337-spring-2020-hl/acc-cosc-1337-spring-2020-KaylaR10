#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_max_from_vector function")
{
    vector<int> numbers{ 22, 9, 45, 23, 6};
    REQUIRE(get_max_from_vector(numbers)== 45);
}

TEST_CASE("Test for is_prime funtion")
{
    REQUIRE(is_prime(2)==true);
    REQUIRE(is_prime(4)==false);
}

TEST_CASE("Test vector_of_primes function")
{
    vector<int> vec{ 2,3,5,7 };
    REQUIRE(vector_of_primes(10) == vec);
}
