// main_test.cpp
#include <gtest/gtest.h>
#include "functions.cpp"


TEST(FizzBuzzTest,  DivisbleBy3) {
   string result = FizzBuzz(3);
   EXPECT_EQ(result, "Fizz");
}

TEST(FizzBuzzTest, DivisibleBy5) {
   string result = FizzBuzz(5);
   EXPECT_EQ(result, "Buzz");
}

TEST(FizzBuzzTest, DivisibleBy15) {
   string result = FizzBuzz(15);
   EXPECT_EQ(result, "FizzBuzz");
}






int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

