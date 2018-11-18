#include "gtest/gtest.h"
#include <iostream>

TEST(HelloTest, BAZEL)
{
    EXPECT_STREQ("Hello Bazel", "Hello Bazel");
}
