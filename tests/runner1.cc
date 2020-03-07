#include "stdio.h"

/* Production code headers */
#include "func1.h"

#include "gtest.h"

/* Mocked headers */
//#include "MockMod1.h"


// void TS1_basicTest2_receiveFunctionShallReturn_1(void){
//   unsigned char a1 = 1;
//   unsigned char b1 = 0x10;
//   unsigned char c1 = 0;

//   Mod1_read_signal_a_ExpectAnyArgs();
//   Mod1_read_signal_b_ExpectAnyArgsAndReturn(0);
//   Mod1_read_signal_c_ExpectAnyArgsAndReturn(0);

//   Mod1_read_signal_a_ReturnThruPtr_a(&a1);
//   Mod1_read_signal_b_ReturnThruPtr_b(&b1);
//   Mod1_read_signal_c_ReturnThruPtr_c(&c1);

//   TEST_ASSERT_EQUAL(1, receiveInputAndReturnBoolean());
// }

// void TS1_basicTest3_receiveFunctionShallReturn_0(void){
//   unsigned char a1 = 5;
//   unsigned char b1 = 0;
//   unsigned char c1 = 0;

//   Mod1_read_signal_a_ExpectAnyArgs();
//   Mod1_read_signal_b_ExpectAnyArgsAndReturn(0);
//   Mod1_read_signal_c_ExpectAnyArgsAndReturn(0);

//   Mod1_read_signal_a_ReturnThruPtr_a(&a1);
//   Mod1_read_signal_b_ReturnThruPtr_b(&b1);
//   Mod1_read_signal_c_ReturnThruPtr_c(&c1);

//   Mod1_write_signal_error_Expect(0x25);

//   TEST_ASSERT_EQUAL(0, receiveInputAndReturnBoolean());
// }
namespace mytest {

TEST(MainTest, Zero) {
  EXPECT_EQ(0, func1());
}

TEST(MainTestFailed, One) {
  EXPECT_EQ(1, func1());
}

}  // namespace

/* Test runner */
int main(int argc, char** argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
