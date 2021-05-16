#pragma once
#include <iostream>
using namespace std;

class cPadre
{
protected:
	cPadre() {
		cout << "Construyo padre";
	}
	virtual ~cPadre();
	virtual void M1() {
		cout << "M1 padre" << endl;
	}
	void M2() {
		cout << "M2 padre" << endl;
	}
};

