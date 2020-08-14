#include <stdio.h>

/* Production code headers */
#include "func1.h"

#include "gtest/gtest.h"

/* Mocked headers */
//#include "MockMod1.h"

namespace mytest {

TEST(MainTest, Zero) {
  EXPECT_EQ(0, func1());
}

TEST(MainTestFailed, One) {
  EXPECT_EQ(1, func1());
}

}  // namespace mytest

/* Test runner */
int main(int argc, char** argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
