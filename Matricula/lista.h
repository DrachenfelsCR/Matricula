#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
template<class T>
class lista
{
protected:
	nodo<T>* primero;
	int size;
public:
	lista();
	bool esVacia();
	void insertarInicio(T*);
	void insertarFinal(T*);
	T* getUltimo();
	string toString();
	T* buscarCredenciales(string,string);
	bool buscar(T* aux);
	bool buscarElemento(int);
	void eliminarInicio();
	bool eliminarEspecifico(T*);
	T* buscarCodigoCarrera(int );
	T* buscarId(string);
	~lista();
};
//------------------------------------

template <class T>
lista<T>::lista() {
	primero = NULL;
	size = 0;
}

template<class T>
bool lista<T>::esVacia() {
	return (primero == NULL);
}


template<class T>
void lista<T>::insertarInicio(T* dato) {
	nodo<T>* actual;
	actual = new nodo<T>(dato);
	actual->setSig(primero);
	primero = actual;
	size++;
}

template <class T>
void lista<T>::insertarFinal(T* dato) {
	nodo<T>* actual;
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
	nodo<T>* actual;
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
T* lista<T>::buscarCodigoCarrera(int cod)
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if ((actual->getInfo())->getCodigo() == cod)
		{
			return actual->getInfo();
		}
		actual = actual->getSig();
	}
	return NULL;
}

template<class T>
bool lista<T>::buscar(T* aux)
{
	nodo<T>* actual;
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

template<class T>
 bool lista<T>::buscarElemento(int dato)
{
	 nodo<T>* aux;
	 aux = primero;
	 while (aux)
	 {
		 if ((aux->getInfo())->getCodigo() == dato )
		 {
			 return true;

		 }
		 aux = aux->getSig();
	 }
	 return false;
}



template<class T>
T* lista<T>::buscarCredenciales(string usuario, string pass)
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if (((actual->getInfo())->getClave() == pass) && (actual->getInfo())->getNombreUsuario() == (usuario))
		{
			return actual->getInfo();
		}
		actual = actual->getSig();
	}
	return nullptr;
}
template<class T>
string lista<T>::toString()
{
	stringstream s;
	if (primero != NULL)
	{
		nodo<T>* actual;
		actual = primero;
		while(actual != NULL)
		{
			s << actual->getInfo()->toString() << endl;
			s << "-------------------------" << endl;
			actual = actual->getSig();
		}
	}
	return s.str();
}

template<class T>
T* lista<T>::buscarId(string id )
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if (((actual->getInfo())->getId() == id) )
		{
			return actual->getInfo();
		}
		actual = actual->getSig();
	}
	return nullptr;
}

template <class T>
T* lista<T>::getUltimo() {
	nodo<T>* actual;
	actual = primero;
	if (esVacia()) {
		return nullptr;
	}
	else {
		while (actual->getSig() != NULL)
		{
			actual = actual->getSig();
		}
		return actual->getInfo();
	}
}






#endif // !LISTA_H
