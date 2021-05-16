#pragma once
#include <iostream>
using namespace std;

class cPadre
{
public:
	cPadre() {
		cout << "Construyo padre"<< endl;
	}
	virtual ~cPadre() {};//vritual xq si dsp tengo un puntero que apunta al hijo, lo elimina
	virtual void M1() {
		cout << "M1 padre" << endl;
	}
	void M2() {
		cout << "M2 padre" << endl;
	}
};

