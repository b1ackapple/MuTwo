#pragma once

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
class h1 {
	string open = "<h1>\t";
	string close = "\t</h1>\n";
	string arr;
public:
	h1(string org) { arr = org; }
	void openSet(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};
class userinput {
	string input;
public:
	userinput() { getline(cin, input); }
	void setArr(string& org) { org += input; }

};
