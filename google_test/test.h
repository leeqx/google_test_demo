#ifndef GOOLE_TEST_H_
#define  GOOLE_TEST_H_

#include "goole_test.h"
#include <gtest/gtest.h>

namespace goole_test_n{

using namespace google_test;
using namespace  std;

TEST(getIntTest,Navite){
	EXPECT_EQ(-1,getInt(-1))<<"expect"<<endl;
	ASSERT_EQ(-1,getInt(-1))<<"Assert"<<endl;
}
TEST(getIntTest,Zero){
	EXPECT_EQ(0,getInt(0))<<"Expect"<<endl;
	ASSERT_EQ(0,getInt(0))<<"Assert"<<endl;
}
TEST(getIntTest,FloatT){
	EXPECT_EQ(1,getInt(1.5))<<"Expect"<<endl;
	ASSERT_EQ(1,getInt(1.5))<<"Assert"<<endl;
}

TEST(IsPrimTest,Navite){
    EXPECT_TRUE(IsPrim(-1))<<"Expect"<<endl;
	ASSERT_TRUE(IsPrim(-1))<<"Assert"<<endl;
}
TEST(IsPrimTest,Zero){
	EXPECT_FALSE(IsPrim(0))<<"Expect"<<IsPrim(0)<<endl;
	ASSERT_FALSE(IsPrim(0))<<"Assert"<<IsPrim(0)<<endl;
}
TEST(IsPrimTest,Positive){
	EXPECT_FALSE(IsPrim(2))<<"Expect"<<endl;
	ASSERT_FALSE(IsPrim(2))<<"assert"<<endl;
}
}//namespace google_name_n
#endif