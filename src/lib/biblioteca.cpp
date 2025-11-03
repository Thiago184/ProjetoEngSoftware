#include "biblioteca.h"
#include <iostream>
using namespace std;

Fracionario::Fracionario(){
    
}
Fracionario::Fracionario(int num, int den){
    this->num = num;
    denominador = den;
}   
float Fracionario::getValue(){
    return (float) num / denominador;
}   
int Fracionario::getNum(){
    return num;
}
int Fracionario::getDen(){
    return denominador;
}
