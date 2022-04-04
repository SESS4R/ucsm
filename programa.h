#pragma once
#include "string"
using namespace std;

class producto
{
private:
    int codigo;
    string nombre;
    float precio;
    int cantidad;
    char estado;

public:
    int getcodigo();
    string getnombre();
    float getprecio();
    int getcantidad();
    char getestado();

    void setcodigo(int);
    void setnombre(string);
    void setprecio(float);
    void setcantidad(int);
    void setestado(char);

    //interface de clase
    void ingresar();
    void imprimir();

    float sacarigv();
    void aumentarstock(int);
    void disminuirstock(int);
    void cambiarprecio(float);
};