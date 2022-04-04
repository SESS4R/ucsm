#include <iostream>
#include "programa.h"
#include"programa.cpp"
#include "string"
using namespace std;


int main(){
    producto azucar;
    azucar.ingresar();
    azucar.cambiarprecio(4.32);
    azucar.imprimir();
    return 0;
}