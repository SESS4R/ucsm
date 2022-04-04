#include <iostream>
#include "string"
#include "programa.h"

//GETTERS
int producto::getcodigo(){
    return codigo;
}
string producto::getnombre(){
    return nombre;
}
float producto::getprecio(){
    return precio;
}
int producto::getcantidad(){
    return cantidad;
}
char producto::getestado(){
    return estado;
}

//SETTERS
void producto::setcodigo(int){}
void producto::setnombre(string){}
void producto::setprecio(float){}
void producto::setcantidad(int){}
void producto::setestado(char){}

// interface de clase
void producto::imprimir()
{
    cout << "================" << endl;
    cout << "Los datos son: " << endl;
    cout << "================" << endl;
    cout << "codigo: " << endl<<codigo<<endl;
    cout << "nombre: " << endl<<nombre<<endl;
    cout << "precio: " << endl<<precio<<endl;
    cout << "cantidad: " << endl<<cantidad<<endl;
    cout << "estado: " << endl<<estado<<endl;
}
void producto::ingresar()
{
    cout << "================" << endl;
    cout << "Ingresar datos: " << endl;
    cout << "================" << endl;
    cout << "codigo: " << endl; cin >>codigo;
    cout << "nombre: " << endl; cin.ignore(); getline(cin, nombre);
    cout << "precio: " << endl; cin >>precio;
    cout << "cantidad: " << endl; cin >>cantidad;
    cout << "estado: " << endl; cin >>estado;
}

float producto::sacarigv()
{
    return precio * 0.18;
}
void producto::aumentarstock(int valor)
{
    cantidad += valor;
}
void producto::disminuirstock(int valor)
{
    if (cantidad > valor)
        cantidad = cantidad - valor;
    else
        cout << "";
}
void producto::cambiarprecio(float valor)
{
    setprecio(valor);
}