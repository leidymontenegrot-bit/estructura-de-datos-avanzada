#include <iostream>
using namespace std;

int main()
{
    int numero = 25;
    int *puntero_leidy;
    puntero_leidy = &numero;
    cout <<"valor de numero: " << numero << endl;
    cout <<"direccion de numero: "<< &numero << *puntero_leidy << endl;
    *puntero_leidy = 100;
    cout <<"nuevo valor del puntero:" << *puntero_leidy << endl;
    cout <<"direccion del nuevo puntero: " << &numero << endl;


    return 0;
}