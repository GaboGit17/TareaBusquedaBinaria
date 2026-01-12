#include <iostream>

using namespace std;

int BusquedaBinaria(int * arr, int n, int x) {
    int izq = 0;
    int der = n-1;
    int contador = 0;
    while (izq <= der) {
        contador++;
        int mid = (izq + der) / 2;
        if (arr[mid] == x) {
            return contador;
        }
        if (arr[mid] < x) {
            izq = mid + 1;
        }
        else {
            der = mid - 1;
        }
    }
    return -1;
}

int main() {
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int x = 4;
    int pos = BusquedaBinaria(v, n, x);

    if (pos == -1)
        cout << "No encontrado"  << endl;
    else
        cout << "Encontrado en: "  << pos << " Recorridos" << endl;

    return 0;
}
/*
    TAREITA DE ANALISIS T(n) DEL CODIGITO

    1. El mejor caso
    de este algoritmo es que el numero buscado este en el medio del vector o lista,
    haciend que solo deba "recorrer" una sola vez la lista, ya que busca el medio y lo encuentra altiro,
    asi entrando al while 1 sola vez y saliendo en el primer if.

    T(n) = O(1)
    Esto debido a que el while no se reitera

    2. Peores Casos

    2.1 Que el numero buscado este en los extremos
    Al estar en los extremos de la lista, el algoritmo no encontrara el numero hasta el final o casi el final.

    T(n) = n(log(n))
    O(log(n))

    2.2 Que el numero este en el medio del medio del medio
    Al estar en el medio del medio del medio, el algoritmo encontrara el numero al final cuando la lista,
    solo tenga 1 elemento.

    T(n) = n(log(n))
    O(log(n))






*/