#pragma once

class mk_file {//파일을 만드는 클래스
	ofstream infile;//스트림 선언
	string name;//파일명을 받기 위한 string 변수
public:
	void Filename(string org);
};

void mk_file::Filename(string org) {
	cout << "파일 이름을 입력하세요 : ";
	getline(cin, name);
	name = name + ".html";//파일 이름에 확장자 명 삽입 
	infile.open(name);
	infile << org;//파일에 이제까지 입력된 내용 넣기
}
