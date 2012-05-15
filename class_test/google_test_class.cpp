/**
 * google_test_class й╣ож
 * @date     5/15/2012  
 * @author   Qingxin Lee
 * @email    lqx0830@hotmail.com
 * @version  1.0 
 * @file     f:\C-CPP_Projects\google_test\class_test/google_test_class.cpp                                                               
 */
#include "google_test_class.h"

class_test::google_test_class::google_test_class(void):m_value(0.0)
{
}

class_test::google_test_class::~google_test_class(void)
{
}
int class_test::google_test_class::getInt(){
	return static_cast<int>(m_value);
}
bool class_test::google_test_class::IsPrim()const{
	int tmp = static_cast<int>(m_value);
	if(m_value!=0 && tmp%2!=0){
		return true;
	}else{
		return false;
	}
}