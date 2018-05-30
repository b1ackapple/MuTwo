#include<iostream>
#include "header.h"

using namespace std;

int main(void)
{
	string Arr;//일괄 처리용 string
	
	start s(Arr);//start 클래스 s 객체 생성
	s.openSet(Arr);
	
	body b(Arr);//body 클래스 b 객체 생성
	b.openSet(Arr);
	
	h1 h(Arr);//h1 클래스 h 객체 생성
	h.openSet(Arr);
	
	userinput u;//userinput 클래스 u 객체 생성
	u.setArr(Arr);
	
	h.closeSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);
	cout << Arr;
	return 0;
}
