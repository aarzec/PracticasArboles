#include <iostream>
#include "Nodo.h"

int main () {
    // Definición del árbol
    Nodo* raiz = new Nodo(6);
    Nodo* nodo1 = new Nodo(4);
    Nodo* nodo2 = new Nodo(1);
    Nodo* nodo3 = new Nodo(5);
    Nodo* nodo4 = new Nodo(8);
    Nodo* nodo5 = new Nodo(9);

    raiz->setIzquierda(nodo1);
    raiz->setDerecha(nodo4);
    nodo1->setIzquierda(nodo2);
    nodo1->setDerecha(nodo3);
    nodo4->setDerecha(nodo5);

    // Inserción
    Nodo::insertar(raiz, 10);
    Nodo::insertar(raiz, 3);

    // Recorridos
    std::cout << "In-orden:\n";
    Nodo::recorrerInOrden(raiz);

    std::cout << "\n\nPre-orden:\n";
    Nodo::recorrerPreOrden(raiz);

    std::cout << "\n\nPost-orden:\n";
    Nodo::recorrerPostOrden(raiz);

    std::cout << "\n\n";
    return 0;
}
