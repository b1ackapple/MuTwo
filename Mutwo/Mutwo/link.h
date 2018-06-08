#pragma once

class a_link {
	string address;
	string last;
	string close = "\n</a>\n";
	image i;
	int number;
	void text();
public:
	void openSet(string &org);
	void finalSet(string &org) { org += last; }
	
};
void a_link::openSet(string &org)
{
	
	cout << "링크 할 주소를 입력하세요 : ";
	cin.ignore();
	getline(cin, address);
	last = "<a href=\"" + address + "\" target=\"new\">\n";
	system("Cls");
	cout << "1. text\n2. image\n";
	cin >> number;
	switch (number)
	{
	case 1:
		text();
		break;
	case 2:
		i.Setimage();
		i.openSet(last);
		break;
	}
}
void a_link::text()
{
	string temp;
	cin.ignore();
	cout << "enter the text :";
	getline(cin, temp);
	last += temp;
	

}