#pragma once
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
	void openSet(string& org) { org = open; }//main string ���� ����
	void closeSet(string& org) { org += close; }
};

class head {
	string open = "<head>\n\t<meta charset=\"utf-8\">\n\t<meta name=\"viewport\" content=\"width = device - width\">\n\t<title>MuTwo</title>\n</head>\n";
	string close = "\n";
	string arr;
public:
	head(string org) { arr = org; }
	void openSet(string& org) { org += open; }
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
	userinput() { cout << "�ϰ� ���� �� "; getline(cin, input); }
	void setArr(string& org) { org += input; }

};

