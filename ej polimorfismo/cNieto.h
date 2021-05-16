#pragma once
#include "cHijo.h"
class cNieto :
    public cHijo
{
public:
    cNieto() {
        cout << "Construyo nieto" << endl;
    }
    ~cNieto();
};

