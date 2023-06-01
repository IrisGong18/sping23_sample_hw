#include "gtest/gtest.h"
#include "q.h"

TEST(SimpleSample, Test1) {
  EXPECT_EQ(Add(0, 1), -1);
}

TEST(SimpleSample, Test2) {
  EXPECT_EQ(Add(1, 1), 0);
}