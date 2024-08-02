#ifndef NODO_H
#define NODO_H

class Nodo {
    private:
        int valor;
        Nodo* izquierda = nullptr;
        Nodo* derecha = nullptr;
        Nodo* padre = nullptr;
    public:
        Nodo();
        Nodo(int val);
        int getValor();
        Nodo* getIzquierda();
        Nodo* getDerecha();
        Nodo* getPadre();
        void setValor(int val);
        void setIzquierda(Nodo* nodo);
        void setDerecha(Nodo* nodo);
        void setPadre(Nodo* nodo);

        static void recorrerInOrden(Nodo* nodo);
        static void recorrerPreOrden(Nodo *nodo);
        static void recorrerPostOrden(Nodo *nodo);

        static void insertar(Nodo* nodo, int val);
};

#endif