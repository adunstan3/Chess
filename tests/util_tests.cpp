#define BOOST_TEST_MODULE My Test 
#include <boost/test/included/unit_test.hpp> 

#include "util.hpp"

BOOST_AUTO_TEST_CASE(first_test) 
{
    int i = 1;
    BOOST_TEST(i); 
    BOOST_TEST(i == 1); 
}

BOOST_AUTO_TEST_CASE(test_add_two_numbers) 
{
    int i = add_two_numbers(3, -2);
    BOOST_TEST(i == 1); 
}