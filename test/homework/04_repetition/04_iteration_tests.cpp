#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify factorial function")
{
	//factor 3
	REQUIRE(factorial(3) == 6);
	//factor 5
	REQUIRE(factorial(5) == 120);
	//factor 6
	REQUIRE(factorial(6) == 720);
}


TEST_CASE("Verify gdc function")
{
	
	REQUIRE(gcd(5, 15) == 5);
	
	REQUIRE(gcd(21, 28) == 7);
	
	REQUIRE(gcd(25, 100) == 25);
}

