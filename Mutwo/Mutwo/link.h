#pragma once

class a_link {
	string address;
	string last;
	string close = "\n</a>\n";//링크 태그
	image i;
	int number;
	void text();
public:
	void openSet(string &org);//코드 입력
	void finalSet(string &org) { org += last; }//주소 입력 용
	void closeSet(string &org) { org += close; }//태그 닫기
	
};
void a_link::openSet(string &org)
{
	
	cout << "링크 할 주소를 입력하세요 : ";
	cin.ignore();//버퍼 비우기
	getline(cin, address);//주소 입력
	last = "<a href=\"" + address + "\" target=\"new\">\n";
	system("Cls");
	cout << "1. text\n2. image\n";
	cin >> number;//번호 입력
	switch (number)
	{
	case 1:
		text();
		break;
	case 2:
		i.Setimage();//이미지 객체
		i.openSet(last);
		break;
	}
}
void a_link::text()
{
	string temp;
	cin.ignore();//버퍼 비우기
	cout << "enter the text :";
	getline(cin, temp);
	last += temp;//입력한 것을 last에 저장
	

}