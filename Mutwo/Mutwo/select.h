#pragma once

class choose {
	string arr;
	int number;
	a_link a; image i; start s; head he; body b; h_number h; mk_file f; userinput u;
	void first_select();//ó�� ����ȭ��
	void secound_select();//�ι� ° ����ȭ��
	void close_tag();//�±� �ݱ� �Լ�
	void closeSet();//body html�±� �ݱ�
public:
	choose();
};
choose::choose()
{
	s.openSet(arr);//���� �±�
	he.openSet(arr);//��� �±� 
	b.openSet(arr);//�ٵ� �±� 

	cout << "���� �մϴ�...\n\n";
	cout << "1. image\n2. link\n3. font\n";
	cin >> number;//���� �Է�
	system("Cls");
	
	switch (number)
	{
	case 1:
		i.Setimage();//�̹�������
		i.openSet(arr);
		first_select();//ó�� ����
	case 2:
		a.openSet(arr);//��ũ ����
		a.finalSet(arr);
		first_select();//ó�� ����
	case 3:
		h.Setfont();//��Ʈ ����
		h.openSet(arr);
		u.ainput(arr);//���� �Է�
		first_select();//ó�� ����

	}
}
void choose::closeSet()
{
	b.closeSet(arr);//body �ݱ�
	s.closeSet(arr);//html �ݱ�
}
void choose::first_select()
{
	cout << "���� �Էµ� �±� :\n" << arr << endl << endl;
	cout << "1. add tag\n2. save and quite\n3. close tag\n";
	cin >> number;//��ȣ ����
	system("Cls");

	switch (number)
	{
	case 1:
		secound_select();//���� ����
	case 2:
		closeSet();
		f.Filename(arr);//���� �̸� ����&�ݱ�
		exit(0);
	case 3:
		close_tag();//�±� �ݱ�

	}
}
void choose::secound_select()
{
	cout << "1. image\n2. link\n3. font\n";
	cin >> number;//��ȣ �Է�
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
		h.closeSet(arr);//��Ʈ �±� �ݱ�
		first_select();//ó�� �������� ���ư���
	case 2:
		a.closeSet(arr);//��ũ �±� �ݱ�
		first_select();//ó�� �������� ���ư���
	}
}