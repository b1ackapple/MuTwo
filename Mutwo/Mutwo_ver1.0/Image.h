#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class image {
	string address;
	string open;
	int width;
	int height;
	string arr;
public:
	image();
	void openSet(string &org) { org += open; }
};
image::image()
{
	char buffer1[100];
	char buffer2[100];
	cout << "�ּ� �Է� : ";
	getline(cin, address);
	cout << "���� �� �Է� : ";
	cin >> width >> height;

	open = "<img src = \"" + address + "\" width = \"" + itoa(width, buffer1, 10) + "\" height = \"" + itoa(height, buffer2, 10) + "\"/>\n";
}
