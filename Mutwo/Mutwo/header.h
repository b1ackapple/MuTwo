#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class start {
	string open = "<html>\n";
	string close = "</html>\n";
	string arr;
public:
	start(string org) { arr = org; }
	void openSet(string& org) { org = open; }//main string 직접 수정
	void closeSet(string& org) { org += close; }
};
class body {
	string open = "<body>\n";
	string close = "</body>\n";
	string arr;
public:
	body(string org) { arr = org; }
	void openSet(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};

class userinput {
	string input;
public:
	userinput() { cout << "하고 싶은 말 "; getline(cin, input); }
	void setArr(string& org) { org += input; }

};

