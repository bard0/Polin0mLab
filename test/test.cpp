// test.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "gtest/gtest.h"
#include "simplemath.h"

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}
int main()
{
    return 0;
}

