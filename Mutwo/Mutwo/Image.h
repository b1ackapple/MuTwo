#pragma once

class image {
	string address;
	string open;
	string width;
	string height;
public:
	void Setimage();
	void openSet(string &org) { org += open; }
};
void image::Setimage()
{
	cout << "�̹��� �ּҸ� �Է��ϼ��� : ";
	cin.ignore();
	getline(cin,address);
	cout << "����ũ�⸦ �Է��ϼ��� : ";
	getline(cin, width);
	cout << "���̸� �Է��ϼ��� : ";
	getline(cin, height);
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	
}