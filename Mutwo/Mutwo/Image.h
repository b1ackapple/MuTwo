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

	cout << "이미지 주소를 입력하세요 : ";
	getline(cin, address);
	cout << "가로크기를 입력하세요 : ";
	getline(cin, width);
	cout << "높이를 입력하세요 : ";
	getline(cin, height);
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
	org += open;
}
