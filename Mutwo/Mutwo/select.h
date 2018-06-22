#pragma once

class choose {
	string arr;
	int number;
	a_link a; image i; start s; head he; body b; h_number h; mk_file f; userinput u;
	void first_select();
	void secound_select();
	void close_tag();
	void closeSet();
public:
	choose();
};
choose::choose()
{
	s.openSet(arr);
	he.openSet(arr);
	b.openSet(arr);

	cout << "시작 합니다...\n\n";
	cout << "1. image\n2. link\n3. font\n";
	cin >> number;
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
void choose::closeSet()
{
	b.closeSet(arr);
	s.closeSet(arr);
}
void choose::first_select()
{
	cout << "현재 입력된 태그 :\n" << arr << endl << endl;
	cout << "1. add tag\n2. save and quite\n3. close tag\n";
	cin >> number;
	system("Cls");

	switch (number)
	{
	case 1:
		secound_select();
	case 2:
		closeSet();
		f.Filename(arr);
		exit(0);
	case 3:
		close_tag();

	}
}
void choose::secound_select()
{
	cout << "1. image\n2. link\n3. font\n";
	cin >> number;
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
		h.closeSet(arr);
		first_select();
	case 2:
		a.closeSet(arr);
		first_select();
	}
}