/**
 *	����Ŀ�в�����Google-test���Կ�ܣ���Ҫ����Visual studio��include·��ʹ�����google_test/include
 *  ͬʱ��Ҫ����visual studio ���ļ�·��ʹ�����google_test/lib��gtest.lib�ļ���Ŀ¼���������ǽ�
 *  gtest.lib��ӵ��Լ�����Ŀ�ĸ�Ŀ¼��,������Ŀ��Ҳ������log4cplus��־��ܣ�������Ҫ���log4cplusU.lib
 *  �Լ���log4cplusUS.lib,ͬʱҲ��Ҫ������include·����
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
