#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
template<class T>
class lista
{
private:
	nodo<T>* primero;
	nodo <T>* actual;
public:
	lista();
	bool esVacia();
	void insertarInicio(T*);
	void insertarFinal(T*);
	string toString();
	bool buscar(T* aux);
	void eliminarInicio();
	bool eliminarEspecifico(T*);
	~lista();
};
//------------------------------------

template <class T>
lista<T>::lista() {
	this->primero = nullptr;
	this->actual = nullptr;
}

template<class T>
bool lista<T>::esVacia() {
	return (primero == NULL);
}

template<class T>
void lista<T>::insertarInicio(T* dato) {
	actual = new nodo<T>(dato);
	actual->setSig(primero);
	primero = actual;
}

template <class T>
void lista<T>::insertarFinal(T* dato) {
	actual = primero;
	if (esVacia()) {
		insertarInicio(dato);
	}
	else {
		while (actual->getSig() != NULL)
		{
			actual = actual->getSig();
		}
		actual->setSig(new nodo<T>(dato));
	}
}

template<class T>
void lista<T>::eliminarInicio() {
	actual = primero;
	if (primero == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
}

template<class T>
bool lista<T>::buscar(T* aux)
{
	actual = primero;
	while (actual)
	{
		if ((*actual->getInfo()) == (*aux))
		{
			return true;
		}
		actual = actual->getSig();
	}
	return false;
}









#endif // !LISTA_H
