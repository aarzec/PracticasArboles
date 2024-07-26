#include <iostream>
#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(int val) {
    valor = val;
}

int Nodo::getValor() {
    return valor;
}

void Nodo::setValor(int val) {
    valor = val;
}

Nodo* Nodo::getIzquierda() {
    return izquierda;
}

void Nodo::setIzquierda(Nodo* nodo) {
    izquierda = nodo;
}

Nodo* Nodo::getDerecha() {
    return derecha;
}

void Nodo::setDerecha(Nodo* nodo) {
    derecha = nodo;
}

void Nodo::recorrerInOrden(Nodo* nodo) {
    if (nodo == nullptr) {
        return;
    }

    recorrerInOrden(nodo->getIzquierda());
    std::cout << nodo->getValor() << " ";
    recorrerInOrden(nodo->getDerecha());
}

void Nodo::recorrerPreOrden(Nodo* nodo) {
    if (nodo == nullptr) {
        return;
    }

    std::cout << nodo->getValor() << " ";
    recorrerPreOrden(nodo->getIzquierda());
    recorrerPreOrden(nodo->getDerecha());
}

void Nodo::recorrerPostOrden(Nodo* nodo) {
    if (nodo == nullptr) {
        return;
    }

    recorrerPostOrden(nodo->getIzquierda());
    recorrerPostOrden(nodo->getDerecha());
    std::cout << nodo->getValor() << " ";
}


