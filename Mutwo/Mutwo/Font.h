#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class hnumber {
	string open;
	string input;
	string close;
	string arr;
public:
	hnumber();
	void openSet(string &org) { org += open; }
	void closeSet(string &org) { org += close; }
}

hnumber::hnumber()
{
	cout << "글자크기를 입력하세요 (1~6) : ";
	getline(cin, input);
	open = "<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
}
