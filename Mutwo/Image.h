#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class image {  
	string address;
	string open;
	string width;
	string height;
public:
	image(string &org);
};
image::image(string &org)
{

	cout << "주소 입력 : ";
	getline(cin, address);
	cout << "넓이 입력 : ";
	getline(cin, width);
	cout << "높이 입력 : ";
	getline(cin, height);
	open = "<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	org += open;
}
