#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "header.h"



int main(void)
{
	string Arr;//�ϰ� ó���� string

	start s(Arr);//start Ŭ���� s ��ü ����
	s.openSet(Arr);

	body b(Arr);//body Ŭ���� b ��ü ����
	b.openSet(Arr);

	hnumber h;//h1 Ŭ���� h ��ü ����
	h.openSet(Arr);

	userinput u;//userinput Ŭ���� u ��ü ����
	u.setArr(Arr);

	
	
	h.closeSet(Arr);
	image i;
	i.openSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);
	cout << Arr;

	
	return 0;
}
