#pragma once

class h_number {
	string open;
	string input;
	string close;
public:
	h_number(string &org);
	void closeSet(string &org) { org += close; }
};

h_number::h_number(string &org)
{
	cout << "ũ���Է� (1~6) : ";
	getline(cin, input);
	open = "\t<h" + input + ">\t";
	close = "\t</h" + input + ">\n";
	org += open;
}