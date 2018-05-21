#include<iostream>

using namespace std;

int main(void)
{
	string Arr;
	start s(Arr);
	s.openSet(Arr);
	body b(Arr);
	b.openSet(Arr);
	h1 h(Arr);
	h.openSet(Arr);
	userinput u;
	u.setArr(Arr);
	h.closeSet(Arr);
	b.closeSet(Arr);
	s.closeSet(Arr);
	cout << Arr;
	return 0;
}
