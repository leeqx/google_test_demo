/**
 *	�ó�����Ҫ��ʹ��google_test��ܲ���goole_test_class�ࡣͬʱҲ�����log4cplus��־����������ص�
 * ��Ϣ��������Ҫ������google_test/include ,gtest.lib,�Լ�log4cplus/include,log4cplusUS.lib
 * @date 5/14/2012  
 * @author Qingxin Lee
 * @email lqx0830@hotmail.com
 * @version   1.0 
 * @file f:\C-CPP_Projects\google_test\class_test/main.cpp                                                               
 */
#include "google_test_fixture.h"
#include <log4cplus/configurator.h>
#include <log4cplus/logger.h>
int main(int argc,char **argv){
	using namespace log4cplus;
	BasicConfigurator config;
	config.configure();
	char class_name[]={"main"};
	tstring str(class_name,class_name+sizeof(class_name)/sizeof(char));
	Logger logger = Logger::getInstance(str);

	LOG4CPLUS_INFO(logger,"begin google_test...");
	::testing::InitGoogleTest(&argc,argv);
	RUN_ALL_TESTS();
	LOG4CPLUS_INFO(logger,"End google_test!");
	
	return 0;
}
