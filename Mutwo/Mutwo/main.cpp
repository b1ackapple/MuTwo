#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

#include "header.h"
#include "Font.h"
#include "Image.h"
#include "file.h"



int main(void)
{
	string Arr;//일괄 처리용 string

	start s(Arr);//start 클래스 s 객체 생성
	head he(Arr);
	body b(Arr);//body 클래스 b 객체 생성

	h_number h;//h1 클래스 h 객체 생성

	h.openSet(Arr);
	userinput u(Arr);//userinput 클래스 u 객체 생성




	h.closeSet(Arr);
	image i;
	i.openSet(Arr);
	he.closeSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);
	cout << Arr;

	mk_file f(Arr);


	return 0;
}