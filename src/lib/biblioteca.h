
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "IFracionario.h"

class Fracionario : public IFracionario
{
private:
    int num;
    int denominador;

public:
    Fracionario();
    Fracionario(int num, int den);
    Fracionario(const Fracionario &f);
    virtual ~Fracionario();
    Fracionario& operator=(const Fracionario &f);

    float getValue();
    int getNum();
    int getDen();

    // bool friend unit_GetNum( void );
    friend class unitFracionario;
};

#endif