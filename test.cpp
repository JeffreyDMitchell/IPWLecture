#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

// REQUIRE - failed test-case will end testing
// CHECK - failed test-case will not end testing

TEST_CASE("Join functionality", "[Join]")
{   
    std::string word_arr[] = {"this", "is", "a", "test"};
    std::vector word_vec(std::begin(word_arr), std::end(word_arr));
    std::string expectation = "thisglueisglueagluetest";

    REQUIRE(Join(word_vec, "glue") == expectation);
}

TEST_CASE("OddMask functionality", "[OddMask]")
{
    bool expectation_arr[] = {true, false, true, false, true};
    int num_set[] = {1,2,3,4,5};

    std::vector expectation(std::begin(expectation_arr), std::end(expectation_arr));
    std::vector num_vec(std::begin(num_set), std::end(num_set));

    REQUIRE(OddMask(num_vec) == expectation);
}

TEST_CASE("EvenMask functionality", "[EvenMask]")
{
    bool expectation_arr[] = {false, true, false, true, false};
    int num_set[] = {1,2,3,4,5};

    std::vector expectation(std::begin(expectation_arr), std::end(expectation_arr));
    std::vector num_vec(std::begin(num_set), std::end(num_set));

    REQUIRE(EvenMask(num_vec) == expectation);
}
