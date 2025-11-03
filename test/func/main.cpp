#include <iostream>
#include <assert.h>
#include <cmath>
#include "..\..\src\lib\biblioteca.h"
#include "..\..\src\lib\IFracionario.h"
using namespace std;

bool test_getValue( void ) {
    Fracionario f1(1, 2);
    assert (round((f1.getValue() - 0.5)*10000) == 0);
    Fracionario f2(1, 3);
    //cout << "denominador: " << f2.getValue() << endl << f2.getNum() << endl << f2.getDen() << endl;
    assert (round((f2.getValue() - 0.3333)*10000) == 0);
    Fracionario f3(1, 2);
    IFracionario &f = f3;
    assert (round((f.getValue() - 0.5)*10000) == 0);

}

int main(void){

	cout << "inicio de teste FUNCIONAL..." << endl;
	test_getValue();

    // conversar com o PO sobre testDenominador ()
	cout << "fim teste!";

}