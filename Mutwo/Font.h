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
	cout << "글자크기를 입력하세요 (1~6) : ";
	getline(cin, input);
	open = "<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
	org += open;
}

