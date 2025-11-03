#include "unitFracionario.h"
#include "..\..\src\lib\biblioteca.h"
#include <assert.h>

bool unitFracionario::getNum()
{
    // to do
    Fracionario f2;
    f2.num = 1;
    assert(f2.getNum() == 1);
    return true;
}

bool unitFracionario::getDen()
{
    // to do
    Fracionario f2;
    f2.denominador = 1;
    assert(f2.getDen() == 1);
    return true;
}