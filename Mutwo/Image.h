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

	cout << "�ּ� �Է� : ";
	getline(cin, address);
	cout << "���� �Է� : ";
	getline(cin, width);
	cout << "���� �Է� : ";
	getline(cin, height);
	open = "<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	org += open;
}
