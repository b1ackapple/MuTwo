#pragma once

class image {
	string address;
	string open;
	string width;
	string height;
public:
	image();
	void openSet(string &org) { org += open; }
};
image::image()
{

	cout << "�̹��� �ּҸ� �Է��ϼ��� : ";
	getline(cin, address);
	cout << "����ũ�⸦ �Է��ϼ��� : ";
	getline(cin, width);
	cout << "���̸� �Է��ϼ��� : ";
	getline(cin, height);
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	
}