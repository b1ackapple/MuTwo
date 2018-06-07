#pragma once

class start {
	string open = "<html>\n";
	string close = "</html>\n";
public:
	start(string& org) { org = open; }
	void closeSet(string& org) { org += close; }
};

class head {
	string open = "<head>\n\t<meta charset=\"utf-8\">\n\t<meta name=\"viewport\" content=\"width = device - width\">\n\t<title>MuTwo</title>\n</head>\n";
	string close = "\n";

public:
	head(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};

class body {
	string open = "<body>\n";
	string close = "</body>\n";
public:
	body(string& org) { org += open; }
	void closeSet(string& org) { org += close; }
};

class userinput {
	string input;
public:
	void ainput(string& org);
};

void userinput::ainput(string& org) {
	cout << "쓰고 싶은 내용을 입력하세요 : ";
	cin.ignore();
	getline(cin, input);
	org += input;
}