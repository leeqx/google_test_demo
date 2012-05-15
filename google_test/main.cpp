/**
 *	该项目中采用了Google-test测试框架，需要设置Visual studio的include路径使其包含google_test/include
 *  同时需要设置visual studio 库文件路径使其包含google_test/lib（gtest.lib文件的目录），或者是将
 *  gtest.lib添加到自己的项目的根目录下,另外项目中也采用了log4cplus日志框架，所以需要添加log4cplusU.lib
 *  以及，log4cplusUS.lib,同时也需要设置其include路径。
 *	
 */
#include "stdafx.h"
#include "test.h"
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>


int _tmain(int argc, _TCHAR* argv[])
{
	using namespace log4cplus;

	BasicConfigurator config;
	config.configure();
	char class_name[]={"main"};
	tstring str(class_name,class_name+sizeof(class_name)/sizeof(char) );
	Logger log = Logger::getInstance(str);
	LOG4CPLUS_INFO(log,"google_test");

	::testing::InitGoogleTest(&argc,(char**)argv);
	RUN_ALL_TESTS();
	return 0;
}
