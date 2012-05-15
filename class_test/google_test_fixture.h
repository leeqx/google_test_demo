/**
 * 使用google的测试套件，对google_test_class 进行测试。
 * @date 5/15/2012  
 * @author Qingxin Lee
 * @email lqx0830@hotmail.com
 * @version   1.0 
 * @file f:\C-CPP_Projects\google_test\class_test/google_test_fixture.h                                                               
 */

#ifndef GOOGLE_TEST_FIXTURE_H_
#define GOOGLE_TEST_FIXTURE_H_

#include "google_test_class.h"
#include <gtest/gtest.h>

namespace fixture{
	using namespace class_test;
	using namespace std;
	class google_test_classTest:public ::testing::Test{
		protected:
		/** 
		 *@name  SerUp
		 *function:	  准备测试用例中使用的数据，比如对象，改方法不是必须的
		 *可以根据需要决定需要需要实现该方法。
		 *@param void 
		 *date: 5/15/2012 snail 
		 *@version 1.0 
		 *<b>Note:</b> 
		 *
		 */ 
		virtual void SetUp(void){
				//do nothing
			}
		/** 
		 *@name TesrDown 
		 *function: 释放SetUp方法中的资源，如果有需要的话。该方法也不是必须的，
		 * 可根据需要决定需不需要实现该方法。
		 *@param void 
		 *date: 5/15/2012 snail 
		 *@version 1.0 
		 *<b>Note:</b> 
		 *
		 */ 
		virtual void TearDown(void){
			//do nothing
		}
		google_test_class obj;
	};

	//////////////////////////////////////////////////////////////////////
	//test_fixture
	TEST_F(google_test_classTest,IsInitialZero){
		EXPECT_EQ(0.0,obj.getInt());
	}
	TEST_F(google_test_classTest,Navgative){
		obj.SetFloat(-1);
		EXPECT_EQ(-1,obj.getInt())<<"Expect"<<endl;
		ASSERT_EQ(-1,obj.getInt())<<"Assert"<<endl;
		EXPECT_TRUE(obj.IsPrim())<<"Expect"<<endl;
		ASSERT_TRUE(obj.IsPrim())<<"Assert"<<endl;
	}

	TEST_F(google_test_classTest,Positive){
		obj.SetFloat(2.0);
		EXPECT_EQ(2,obj.getInt())<<"Expect"<<endl;
		ASSERT_EQ(2,obj.getInt())<<"Assert"<<endl;
		EXPECT_FALSE(obj.IsPrim())<<"Expect"<<endl;
		ASSERT_FALSE(obj.IsPrim())<<"Assert"<<endl;
		obj.SetFloat(1.0);
		EXPECT_EQ(1,obj.getInt())<<"Expect"<<endl;
		ASSERT_EQ(1,obj.getInt())<<"Assert"<<endl;
		EXPECT_TRUE(obj.IsPrim())<<"Expect"<<endl;
		ASSERT_TRUE(obj.IsPrim())<<"Assert"<<endl;
	}
}	 //namespace

#endif
