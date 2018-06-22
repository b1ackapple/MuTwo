#pragma once

class h_number {
	string open;
	string input;
	string close;
public:
	void openSet(string &org) { org += open; }//코드 입력
	void closeSet(string &org) { org += close; }
	void Setfont();
};

void h_number::Setfont()//폰트 설정 함수
{
	cout << "select font(1~6) : ";
	cin.ignore();//버퍼 비우기
	getline(cin, input);//입력
	system("Cls");
	open = "\t<h" + input + ">\t";//태그 열기
	close = "\t</h" + input + ">\n";//태그 닫기
	
}
