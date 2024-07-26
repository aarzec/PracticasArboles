#ifndef NODO_H
#define NODO_H

class Nodo {
    private:
        int valor;
        Nodo* izquierda;
        Nodo* derecha;
    public:
        Nodo();
        Nodo(int val);
        int getValor();
        Nodo* getIzquierda();
        Nodo* getDerecha();
        void setValor(int val);
        void setIzquierda(Nodo* nodo);
        void setDerecha(Nodo* nodo);

        static void recorrerInOrden(Nodo* nodo);
        static void recorrerPreOrden(Nodo *nodo);
        static void recorrerPostOrden(Nodo *nodo);
};

#endif