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
	string Arr;//�ϰ� ó���� string

	start s(Arr);//start Ŭ���� s ��ü ����
	head he(Arr);
	body b(Arr);//body Ŭ���� b ��ü ����

	h_number h;//h1 Ŭ���� h ��ü ����

	h.openSet(Arr);
	userinput u(Arr);//userinput Ŭ���� u ��ü ����




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