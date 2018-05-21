#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class start {
	string open = "<html>\n";
	string close = "</html>\n";
	string arr;
public:
	void setArr(string org) { org = arr; }
	start(string org) { org = open; }
	~start() { arr + close; }
};
class body {
	string open = "<body>\n";
	string close = "</body>\n";
	string arr;
public:
	void setArr(string org) { org = arr; }
	body(string org) { org + open; }
	~body() { arr + close; }
};
class h1 {
	string open = "<h1>\t";
	string close = "</h1>\n";
	string arr;
public:
	void stetArr(string org) { org = arr; }
	h1(string org) { org + open; }
	~h1() { arr + close; }
};
class userinput {
	string input;
public:
	userinput() { getline(cin, input); }
	void setArr(string org) { org = input; }

};
int main(void)
{
	string Arr;
	start s(Arr);
	body b(Arr)
}