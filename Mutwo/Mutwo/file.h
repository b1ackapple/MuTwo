#pragma once

class mk_file {//������ ����� Ŭ����
	ofstream infile;//��Ʈ�� ����
	string name;//���ϸ��� �ޱ� ���� string ����
public:
	void Filename(string org);
};

void mk_file::Filename(string org) {
	cout << "���� �̸��� �Է��ϼ��� : ";
	cin.ignore();//���� �ʱ�ȭ
	getline(cin, name);//�Է�
	name += ".html";//���� �̸��� Ȯ���� �� ���� 
	infile.open(name);//���� ����
	infile << org;//���Ͽ� �������� �Էµ� ���� �ֱ�
}
