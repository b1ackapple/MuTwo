#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class start {
	string open = "<html>\n";
	string close = "</html>\n";
	string arr;
public:
	start(string org) { arr = org; }
	void openSet(string& org) { org = open; }
	void closeSet(string& org) { org += close; }
};
class body {
	string open = "<body>\n";
	string close = "</body>\n";
	string arr;
public:
	body(string& org) { arr = org; }
	void openSet(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};
class h1 {
	string open = "<h1>\t";
	string close = "\t</h1>\n";
	string arr;
public:
	h1(string& org) { arr = org; }
	void openSet(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};
class userinput {
	string input;
public:
	userinput() { getline(cin, input); }
	void setArr(string& org) { org += input; }

};
int main(void)
{
	string Arr;
	start s(Arr);
	s.openSet(Arr);
	body b(Arr);
	b.openSet(Arr);
	h1 h(Arr);
	h.openSet(Arr);
	userinput u;
	u.setArr(Arr);
	h.closeSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);

	cout << Arr;

}