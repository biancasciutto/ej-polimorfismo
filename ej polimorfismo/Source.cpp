#include "cPadre.h"
#include "cHijo.h"
#include "cNieto.h"

int main()
{
	cPadre P1;
	cHijo H1;
	cNieto N1;

	P1.M1();
	P1.M2();
	H1.M1();
	H1.M2();
	N1.M1();
	N1.M2();



	system("pause");
	return 0;
}