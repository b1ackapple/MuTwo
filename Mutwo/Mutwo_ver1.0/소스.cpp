#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "header.h"
#include "Font.h"
#include "Image.h"


int main(void)
{
	string Arr;//�ϰ� ó���� string

	start s(Arr);//start Ŭ���� s ��ü ����
	s.openSet(Arr);

	head he(Arr);
	he.openSet(Arr);

	body b(Arr);//body Ŭ���� b ��ü ����
	b.openSet(Arr);

	h_number h;//h1 Ŭ���� h ��ü ����
	h.openSet(Arr);

	userinput u;//userinput Ŭ���� u ��ü ����
	u.setArr(Arr);



	h.closeSet(Arr);
	image i;
	i.openSet(Arr);
	he.closeSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);
	cout << Arr;


	return 0;
}
