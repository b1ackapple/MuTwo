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
	getline(cin, input);//���� �Է�
	last = open + "<title>" + input + "</title>\n" + "</head>\n";
	org += last;//��� �ۼ�
}

class body {
	string open = "<body>\n";
	string close = "</body>\n";
public:
	void openSet(string &org) { org += open; }//body ����
	void closeSet(string& org) { org += close; }//body �ݱ�
};

class userinput {
	string input;
public:
	void ainput(string& org);//���� �Է��Լ�
};

void userinput::ainput(string& org) {
	cout << "���� ���� ������ �Է��ϼ��� : ";
	getline(cin, input);//���� �Է�
	system("Cls");
	org += input;//�迭�� �Է��� ���� �߰�
}