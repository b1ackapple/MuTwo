#pragma once

class h_number {
	string open;
	string input;
	string close;
public:
	void openSet(string &org) { org += open; }//�ڵ� �Է�
	void closeSet(string &org) { org += close; }
	void Setfont();
};

void h_number::Setfont()//��Ʈ ���� �Լ�
{
	cout << "select font(1~6) : ";
	cin.ignore();//���� ����
	getline(cin, input);//�Է�
	system("Cls");
	open = "\t<h" + input + ">\t";//�±� ����
	close = "\t</h" + input + ">\n";//�±� �ݱ�
	
}
