/**
 *	该程序主要是使用google_test框架测试goole_test_class类。同时也结合了log4cplus日志框架来输出相关的
 * 信息，所以需要依赖与google_test/include ,gtest.lib,以及log4cplus/include,log4cplusUS.lib
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
