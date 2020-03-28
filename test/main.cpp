#include <gtest/gtest.h>
#include "test/Test_ex4.hpp"

//----------------------------------------------
class Test_Example : public ::testing::Test {
protected:
	// Example s;
};
TEST_F(Test_Example, Answer_Example) {
	EXPECT_EQ(0, 0);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
