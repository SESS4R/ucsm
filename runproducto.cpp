#include <iostream>
#include "programa.h"
#include "programa.cpp"
#include "string"
using namespace std;

int main()
{
    char resp = ' ';
    producto azucar;
    do
    {
        azucar.ingresar();
        azucar.cambiarprecio(4.32);
        azucar.imprimir();
        int opc=menu();
        switch(opc){
            case 1:
            azucar.ingresar();
        }
        system("cls");
        cout << "Desea continnuar?" << endl;
        cin >> resp;
        if (resp == 'n')
            break;
    } while (1);

    return 0;
}
int menu()
{
    int opc = 0;
    do
    {
        system("cls");
        cout << "\t\t\tMENU\n";
        cout << "1. INGRESAR DATOS DEL PRODUCTO";
        cout << "2. AUMENTAR STOCK DEL PRODUCTO";
        cout << "3. DISMINUIR STOCK DEL PRODUCTO";
        cout << "4. CALCULAR IGV DEL PRODUCTO";
        cout << "5. CAMBIAR PRECIO DEL PRODUCTO";
        cout << "6. IMPRIMIR DATOS DEL PRODUCTO";
        cout << "7. FINALIZAR" << endl;
        cout << "INGRESAR NUMERO DEL 1-7";
        cin >> opc;
        if (opc < 1 || opc > 7)
            cout << "ERROR: Eligio opcion no valida. INGRESAR VALOR DEL 1 AL 7";
    } while (opc < 1 || opc > 7);
    return opc;
}