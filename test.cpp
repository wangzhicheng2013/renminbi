/*************************************************************************
    > File Name: test_unittest.cpp
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sun 08 Oct 2017 07:42:01 PM AWST
 ************************************************************************/

#include "RenMinBi.h"
#include "gtest/gtest.h"
using namespace ren_min_bi;
TEST(RENMINBI, LOWERTOUPPER_INTEGER_OK0)
{
	string lower = "8";
	string upper;
	RenMinBi::lower_to_upper(lower, upper);
	EXPECT_EQ(upper, "捌元");
}
TEST(RENMINBI, LOWERTOUPPER_INTEGER_OK1)
{
	string lower = "0";
	string upper;
	RenMinBi::lower_to_upper(lower, upper);
	EXPECT_EQ(upper, "零元");
}
TEST(RENMINBI, LOWERTOUPPER_INTEGER_OK2)
{
	string lower = "10";
	string upper;
	RenMinBi::lower_to_upper(lower, upper);
	cout << upper << endl;
	EXPECT_EQ(upper, "壹拾元");
}


