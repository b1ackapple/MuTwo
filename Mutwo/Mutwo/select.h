#pragma once

class choose {
	string arr;
	int number;
	a_link a; image i; start s; head he; body b; h_number h; mk_file f; userinput u;
	void first_select();//처음 선택화면
	void secound_select();//두번 째 선택화면
	void close_tag();//태그 닫기 함수
	void closeSet();//body html태그 닫기
public:
	choose();
};
choose::choose()
{
	s.openSet(arr);//시작 태그
	he.openSet(arr);//헤더 태그 
	b.openSet(arr);//바디 태그 

	cout << "시작 합니다...\n\n";
	cout << "1. image\n2. link\n3. font\n";
	cin >> number;//숫자 입력
	system("Cls");
	
	switch (number)
	{
	case 1:
		i.Setimage();//이미지설정
		i.openSet(arr);
		first_select();//처음 선택
	case 2:
		a.openSet(arr);//링크 설정
		a.finalSet(arr);
		first_select();//처음 선택
	case 3:
		h.Setfont();//폰트 설정
		h.openSet(arr);
		u.ainput(arr);//내용 입력
		first_select();//처음 선택

	}
}
void choose::closeSet()
{
	b.closeSet(arr);//body 닫기
	s.closeSet(arr);//html 닫기
}
void choose::first_select()
{
	cout << "현재 입력된 태그 :\n" << arr << endl << endl;
	cout << "1. add tag\n2. save and quite\n3. close tag\n";
	cin >> number;//번호 선택
	system("Cls");

	switch (number)
	{
	case 1:
		secound_select();//다음 선택
	case 2:
		closeSet();
		f.Filename(arr);//파일 이름 설정&닫기
		exit(0);
	case 3:
		close_tag();//태그 닫기

	}
}
void choose::secound_select()
{
	cout << "1. image\n2. link\n3. font\n";
	cin >> number;//번호 입력
	system("Cls");

	switch (number)
	{
	case 1:
		i.Setimage();
		i.openSet(arr);
		first_select();
	case 2:
		a.openSet(arr);
		a.finalSet(arr);
		first_select();
	case 3:
		h.Setfont();
		h.openSet(arr);
		u.ainput(arr);
		first_select();
	}
}
void choose::close_tag()
{
	cout << "1. font\n2. link\n";
	cin >> number;
	system("Cls");

	switch (number)
	{
	case 1:
		h.closeSet(arr);//폰트 태그 닫기
		first_select();//처음 선택으로 돌아가기
	case 2:
		a.closeSet(arr);//링크 태그 닫기
		first_select();//처음 선택으로 돌아가기
	}
}