#pragma once

#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class h_number {
	string open;
	string input;
	string close;
	string arr;
public:
	h_number();
	void openSet(string &org) { org += open; }
	void closeSet(string &org) { org += close; }
};

h_number::h_number()
{
	cout << "글자크기를 입력하세요 (1~6) : ";
	getline(cin, input);
	open = "\t<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
}

