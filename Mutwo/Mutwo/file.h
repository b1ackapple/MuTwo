#pragma once

class mk_file {//������ ����� Ŭ����
	ofstream infile;//��Ʈ�� ����
	string name;//���ϸ��� �ޱ� ���� string ����
public:
	mk_file(string org);
	~mk_file();
};
mk_file::mk_file(string org) {
	cout << "���� �̸��� �Է��ϼ��� : ";
	getline(cin, name);
	name = name + ".html";//���� �̸��� Ȯ���� �� ���� 
	infile.open(name);
	infile << org;//���Ͽ� �������� �Էµ� ���� �ֱ�
}
mk_file::~mk_file()//�Ҹ��ڸ� ���� ���� �ݱ�
{
	infile.close();
}