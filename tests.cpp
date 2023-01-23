#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"
#include <string>
TEST_CASE("push_back, pop_back, index access")
{
    MyVector<std::string> vec;

    vec.push_back("0");
    vec.push_back("1");
    vec.push_back("2");
    vec.push_back("3");
    vec.push_back("4");
    vec.push_back("5");

    CHECK(vec[0] == "0");
    CHECK(vec[1] == "1");
    CHECK(vec[2] == "2");
    CHECK(vec[3] == "3");
    CHECK(vec[4] == "4");
    CHECK(vec[5] == "5");

    vec.pop_back();
    vec.pop_back(2);

    //CHECK_THROWS_WITH((vec[3]), "Given index is out of range");

    vec.push_back("something else besides 3");
    CHECK(vec[3] == "something else besides 3");

}

TEST_CASE("size, capacity, empty, clear")
{

}