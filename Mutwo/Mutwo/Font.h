#pragma once

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class hnumber {
	string open;
	string input;
	string close;
	string arr;

public:
	hnumber();
	void openSet(string &org) { org += open; }
	void closeSet(string &org) { org += close; }
