#pragma once

using namespace std;
class image {
	string address;
	string open;
	string width;
	string height;
public:
	image(string &org);
};
image::image(string &org)
{

	cout << "�̹��� �ּҸ� �Է��ϼ��� : ";
	getline(cin, address);
	cout << "����ũ�⸦ �Է��ϼ��� : ";
	getline(cin, width);
	cout << "���̸� �Է��ϼ��� : ";
	getline(cin, height);
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	org += open;
}
