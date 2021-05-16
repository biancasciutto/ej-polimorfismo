#pragma once
#include "cPadre.h"
class cHijo :
    public cPadre
{
protected:
    cHijo():cPadre() {
        cout << "Construyo hijo" << endl;
    }
    virtual ~cHijo();
    virtual void M1() {
        //cPadre:M1();
        cout << "M1 hijo" << endl;
    }
    void M2() {
        cout << "M2 hijo" << endl;
    }

};

