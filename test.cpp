#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(TestSuitSample, TestSample){
    int s = sum(2, 4);
    ASSERT_EQ(6, s);
}

int main(int argc, char **agrv){
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}