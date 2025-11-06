#include <iostream>
#include <assert.h>
#include <cmath>
#include "..\..\src\lib\biblioteca.h"
#include "unitFracionario.h"

using namespace std;

// Teste funcional que so conhece a API, não é independente
// bool unit_GetNum( void ) {
//     Fracionario f2(1, 0);
//     assert ( f2.getNum() == 1 );
// }

// teste unitario que é amigo do codigo, é independente
// bool unit_GetNum( void ) {
//     Fracionario f2;
//     f2.num = 1; 
//     assert ( f2.getNum() == 1 );
// }

int main(void){

    unitFracionario uf;
	cout << "inicio teste UNITARIO..." << endl;
    uf.getDen();
    uf.getNum();
    // conversar com o PO sobre testDenominador ()
	cout << "fim teste!";

}