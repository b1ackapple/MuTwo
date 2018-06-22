#pragma once

class image {
	string address;//이미지 주소
	string open;
	string width;//이미지 넓이
	string height;//이미지 높이
public:
	void Setimage();//이미지 설정 함수
	void openSet(string &org) { org += open; }//코드 입력
};
void image::Setimage()
{
	cout << "이미지 주소를 입력하세요 : ";
	cin.ignore();//버퍼 비우기
	getline(cin,address);//입력
	cout << "가로크기를 입력하세요 : ";
	getline(cin, width);//이미지 넓이 입력
	cout << "높이를 입력하세요 : ";
	getline(cin, height);//이미지 높이 입력
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
}