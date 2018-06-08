#pragma once

class start {
	string open = "<html>\n";
	string close = "</html>\n";
public:
	void openSet(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};

class head {
	string open = "<head>\n\t<meta charset=\"utf-8\">\n\t<meta name=\"viewport\" content=\"width = device - width\">\n";
	string input;
	string last;

public:
	void openSet(string &org);
	
};
void head::openSet(string &org)
{
	cout << "enter the title : ";
	getline(cin, input);
	last = open + "<title>" + input + "</title>\n" + "</head>\n";
	org += last;
}

class body {
	string open = "<body>\n";
	string close = "</body>\n";
public:
	void openSet(string &org) { org += open; }
	void closeSet(string& org) { org += close; }
};

class userinput {
	string input;
public:
	void ainput(string& org);
};

void userinput::ainput(string& org) {
	cout << "쓰고 싶은 내용을 입력하세요 : ";
	getline(cin, input);
	system("Cls");
	org += input;
}