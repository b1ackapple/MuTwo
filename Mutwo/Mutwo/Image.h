#pragma once

class image {
	string address;//�̹��� �ּ�
	string open;
	string width;//�̹��� ����
	string height;//�̹��� ����
public:
	void Setimage();//�̹��� ���� �Լ�
	void openSet(string &org) { org += open; }//�ڵ� �Է�
};
void image::Setimage()
{
	cout << "�̹��� �ּҸ� �Է��ϼ��� : ";
	cin.ignore();//���� ����
	getline(cin,address);//�Է�
	cout << "����ũ�⸦ �Է��ϼ��� : ";
	getline(cin, width);//�̹��� ���� �Է�
	cout << "���̸� �Է��ϼ��� : ";
	getline(cin, height);//�̹��� ���� �Է�
	open = "\t<img src = \"" + address + "\" width = \"" + width + "\" height = \"" + height + "\"/>\n";
}