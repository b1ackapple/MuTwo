#pragma once

class image {
	string address;
	string open;
	string width;
	string height;
public:
	void Setimage(string &org);
	void openSet(string &org) { org += open; }
};
void image::Setimage(string &org)
{

	cout << "이미지 주소를 입력하세요 : ";
	getline(cin, address);
	cout << "가로크기를 입력하세요 : ";
	getline(cin, width);
	cout << "높이를 입력하세요 : ";
	getline(cin, height);
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	void openSet(string &org);
}