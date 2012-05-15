/**
 * 一个简单的类，仅为示范如果使用google_test套件进行测试。
 * @date 5/15/2012  
 * @author Qingxin Lee
 * @email lqx0830@hotmail.com
 * @version   1.0 
 * @file f:\C-CPP_Projects\google_test\class_test/google_test_class.h                                                               
 */
#ifndef	  GOOLE_TEST_CLASS_H_
#define  GOOLE_TEST_CLASS_H_

namespace class_test{

	class google_test_class
	{
	public:
		google_test_class(void);
		~google_test_class(void);
		/**
		 *   将m_value转化成为比其小的最大整数
		 */
		int getInt();
		/**
		 *	判断m_value是否是素数，如果是则返回true否则返回false；
		 */
		bool IsPrim()const;
		 /** 
		  *@name  
		  *function: 
		  *@param f待设定的值 
		  *date: 5/15/2012 snail 
		  *@version 1.0 
		  *<b>Note:</b> 
		  *
		  */ 
		void SetFloat(float f){
			m_value = f;
		}
	private:
		float m_value;
	};

}//namespace class_test


#endif