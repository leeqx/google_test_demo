// google_test.cpp : �������̨Ӧ�ó������ڵ㡣
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
