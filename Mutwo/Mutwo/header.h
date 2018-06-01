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

class image {
	string address;
	string open;
	int width;
	int height;
	string arr;
public:
	image();
	void openSet(string &org) { org += open; }
};
image::image()
{
	char buffer1[100];
	char buffer2[100];
	cout << "주소 입력 : ";
	getline(cin, address);
	cout << "넓이 폭 입력 : ";
	cin >> width >> height;

	open = "<img src = \"" + address + "\" width = \"" + itoa(width, buffer1, 10) + "\" height = \"" + itoa(height, buffer2, 10) + "\"/>\n";
}

