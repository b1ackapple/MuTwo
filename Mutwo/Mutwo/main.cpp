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
	string Arr;//ÀÏ°ý Ã³¸®¿ë string

	start s(Arr);//start Å¬·¡½º s °´Ã¼ »ý¼º
	head he(Arr);
	body b(Arr);//body Å¬·¡½º b °´Ã¼ »ý¼º

	h_number h;//h1 Å¬·¡½º h °´Ã¼ »ý¼º

	h.openSet(Arr);
	userinput u(Arr);//userinput Å¬·¡½º u °´Ã¼ »ý¼º




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