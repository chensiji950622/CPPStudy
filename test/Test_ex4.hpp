#include "src/ex4.hpp"
#include <gtest/gtest.h>

class Test_EX4 : public ::testing::Test {
protected:
	// Example s;
};
TEST_F(Test_EX4, Answer_Example) {
	EXPECT_EQ(EX4::algorithm("HaaH"), "Yes!");
}

TEST_F(Test_EX4, Wrong_Answer_Example) {
	EXPECT_EQ(EX4::algorithm("HaHa"), "Yes!");	//这里模拟下出错示例
	EXPECT_EQ(EX4::algorithm("XiXi"), "No!");
}