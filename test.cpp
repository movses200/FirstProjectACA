#include <gtest/gtest.h>
#include "functions.h"

TEST(functions_test, fib_test_1){
    const auto expected = 1;
    const auto actual = fib(1);
    ASSERT_EQ(expected, actual);
}
TEST(functions_test, fib_test_3){
    const auto expected = 2;
    const auto actual = fib(3);
    ASSERT_EQ(expected, actual);
}

TEST(functions_test, fib_test_4){
    const auto expected = 3;
    const auto actual = fib(4);
    ASSERT_EQ(expected, actual);
}

TEST(functions_test, pwr_of_two_1){
    const auto expected = true;
    const auto actual = pwr_of_two(1);
    ASSERT_EQ(expected, actual);
}
TEST(functions_test, pwr_of_two_5){
    const auto expected = false;
    const auto actual = pwr_of_two(5);
    ASSERT_EQ(expected, actual);
}
TEST(functions_test, pwr_of_two_8){
    const auto expected = true;
    const auto actual = pwr_of_two(8);
    ASSERT_EQ(expected, actual);
}

TEST(functions_test, count_of_one_7){
    const auto expected = 3;
    const auto actual = count_of_one(7);
    ASSERT_EQ(expected, actual);
}
TEST(functions_test, count_of_one_0){
    const auto expected = 0;
    const auto actual = count_of_one(0);
    ASSERT_EQ(expected, actual);
}

TEST(functions_test, prime_7){
    const auto expected = true;
    const auto actual = is_prime(7);
    ASSERT_EQ(expected, actual);
}
TEST(functions_test, prime_10){
    const auto expected = false;
    const auto actual = is_prime(10);
    ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}