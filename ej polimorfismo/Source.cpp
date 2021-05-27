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
	
	cPadre* pPP = new cPadre();
	cPadre* pPH = new cHijo();
	cPadre* pPN = new cNieto();
	cHijo* pHH = new cHijo();
	cHijo* pHN = new cNieto();
	cNieto* pNN = new cNieto();

	pPP->M1(); //M1 padre
	pPP->M2(); //M2 padre
	pPH->M1(); //M1 hijo
	pPH->M2(); //M2 padre
	pPN->M1(); //M1 nieto
	pPN->M2(); //M2 padre
	pHH->M1(); //M1 hijo
	pHH->M2(); //M2 hijo
	pHN->M1(); //M1 nieto
	pHN->M2(); //M2 hijo 
	pNN->M1(); //M1 nieto
	pNN->M2(); //M2 nieto


	delete pPP; delete pPH; delete pPN;
	delete pHH; delete pHN; delete pNN;

	system("pause");
	return 0;
}