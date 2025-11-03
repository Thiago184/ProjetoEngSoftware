
#ifndef IFRACIONARIO_H
#define IFRACIONARIO_H

class IFracionario
{

public:
    virtual ~IFracionario(){};
    virtual float getValue() = 0;
    virtual int getNum() = 0;
    virtual int getDen() = 0;

};

#endif