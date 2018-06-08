#pragma once

class h_number {
	string open;
	string input;
	string close;
public:
	void openSet(string &org) { org += open; }
	void closeSet(string &org) { org += close; }
	void Setfont();
};

void h_number::Setfont()
{
	cout << "select font(1~6) : ";
	cin.ignore();
	getline(cin, input);
	system("Cls");
	open = "\t<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
	
}
