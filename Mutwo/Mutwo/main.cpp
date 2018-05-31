#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "header.h"



int main(void)
{
	string Arr;//ÀÏ°ý Ã³¸®¿ë string

	start s(Arr);//start Å¬·¡½º s °´Ã¼ »ý¼º
	s.openSet(Arr);

	body b(Arr);//body Å¬·¡½º b °´Ã¼ »ý¼º
	b.openSet(Arr);

	hnumber h;//h1 Å¬·¡½º h °´Ã¼ »ý¼º
	h.openSet(Arr);

	userinput u;//userinput Å¬·¡½º u °´Ã¼ »ý¼º
	u.setArr(Arr);

	
	
	h.closeSet(Arr);
	image i;
	i.openSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);
	cout << Arr;

	
	return 0;
}
