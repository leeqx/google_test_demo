// google_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "goole_test.h"

int google_test::getInt(float f){
	return static_cast<int>(f);
}

bool google_test::IsPrim(int p){
  if(p!=0 && p%2!=0){
		return true;
	}else{
		return false;
	}
}
