#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class h_number {
	string open;
	string input;
	string close;
public:
	h_number(string &org);
	void closeSet(string &org) { org += close; }
};

h_number::h_number(string &org)
{
	cout << "����ũ�⸦ �Է��ϼ��� (1~6) : ";
	getline(cin, input);
	open = "<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
	org += open;
}

