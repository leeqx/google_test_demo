/**
 * һ���򵥵��࣬��Ϊʾ�����ʹ��google_test�׼����в��ԡ�
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
		 *   ��m_valueת����Ϊ����С���������
		 */
		int getInt();
		/**
		 *	�ж�m_value�Ƿ���������������򷵻�true���򷵻�false��
		 */
		bool IsPrim()const;
		 /** 
		  *@name  
		  *function: 
		  *@param f���趨��ֵ 
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