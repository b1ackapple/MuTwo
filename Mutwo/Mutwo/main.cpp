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
	userinput u;//input Å¬·¡½º u °´Ã¼ »ý¼º
	image i;//image Å¬·¡½º i °´Ã¼ »ý¼º
	mk_file f;//mk_file Å¬·¡½º f °´Ã¼ »ý¼º


	while (1)
	{
		int select;
		
		cout <<endl<< "0. Save file" << endl;
		cout << "1. Font" << endl;
		cout << "2.Image" << endl;
		cout << "3. Userinput" << endl;
		cout << "4. Close tag" << endl;
		cout << "10. Exit" << endl<<endl;

		cout << "Select number : ";

		cin >> select;

		cout << endl;

		if (select == 10)
			break;

		switch (select)
		{
		case 0:
			f.Filename(Arr);
			return 0;
		case 1:
			h.Setfont(Arr);
			break;
		case 2:
			i.Setimage(Arr);
			i.openSet(Arr);
			break;
		case 3:
			u.ainput(Arr);
			break;
		}
		system("cls");
		cout << "html code" << endl << endl;
		cout << Arr << endl << endl;
	}

	h.closeSet(Arr);
	b.closeSet(Arr);
	he.closeSet(Arr);
	s.closeSet(Arr);

	cout << Arr;
	return 0;
}