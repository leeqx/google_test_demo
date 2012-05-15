/**
 * ʹ��google�Ĳ����׼�����google_test_class ���в��ԡ�
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
		 *function:	  ׼������������ʹ�õ����ݣ�������󣬸ķ������Ǳ����
		 *���Ը�����Ҫ������Ҫ��Ҫʵ�ָ÷�����
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
		 *function: �ͷ�SetUp�����е���Դ���������Ҫ�Ļ����÷���Ҳ���Ǳ���ģ�
		 * �ɸ�����Ҫ�����費��Ҫʵ�ָ÷�����
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
