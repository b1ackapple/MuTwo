#pragma once

class a_link {
	string address;
	string last;
	string close = "\n</a>\n";//��ũ �±�
	image i;
	int number;
	void text();
public:
	void openSet(string &org);//�ڵ� �Է�
	void finalSet(string &org) { org += last; }//�ּ� �Է� ��
	void closeSet(string &org) { org += close; }//�±� �ݱ�
	
};
void a_link::openSet(string &org)
{
	
	cout << "��ũ �� �ּҸ� �Է��ϼ��� : ";
	cin.ignore();//���� ����
	getline(cin, address);//�ּ� �Է�
	last = "<a href=\"" + address + "\" target=\"new\">\n";
	system("Cls");
	cout << "1. text\n2. image\n";
	cin >> number;//��ȣ �Է�
	switch (number)
	{
	case 1:
		text();
		break;
	case 2:
		i.Setimage();//�̹��� ��ü
		i.openSet(last);
		break;
	}
}
void a_link::text()
{
	string temp;
	cin.ignore();//���� ����
	cout << "enter the text :";
	getline(cin, temp);
	last += temp;//�Է��� ���� last�� ����
	

}