#pragma once
#include "cHijo.h"
class cNieto :
    public cHijo
{
public:
    cNieto():cHijo(){
        cout << "Construyo nieto" << endl;
    }
    ~cNieto() {};
    virtual void M1() {
        cout << "M1 hijo" << endl;
    }
    void M2() {
        cout << "M2 hijo" << endl;
    }
};

