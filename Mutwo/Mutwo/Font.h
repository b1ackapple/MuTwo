#pragma once

class h_number {
	string open;
	string input;
	string close;
public:
	void openSet(string &org) { org += open; }
	void closeSet(string &org) { org += close; }
	void Setfont(string &org);
};

void h_number::Setfont(string &org)
{
	cout << "select font(1~6) : ";
	cin.ignore();
	getline(cin, input);
	open = "\t<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
	void openSet(string &org);
}
