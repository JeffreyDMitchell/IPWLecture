#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

// REQUIRE - failed test-case will end testing
// CHECK - failed test-case will not end testing

TEST_CASE("Join functionality", "[Join]")
{
    REQUIRE(1 == 1);
}

TEST_CASE("OddMask functionality", "[OddMask]")
{
    
}

TEST_CASE("EvenMask functionality", "[EvenMask]")
{
    
}

// cant compile because SIGSTKSZ is messed up :(