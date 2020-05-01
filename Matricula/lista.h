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
	bool buscarCicloElectivo(int,int);
	T* buscarCicloElectivo2(int, int);
	bool eliminarEspecifico(T*);
	bool buscarID(string);
	bool buscarCodigoCurso(string);
	T* buscarCodigoCarrera(int );
	T* buscarId(string);
	T* buscarNRC(int);
	T* buscarGrupo(int,int,int);
	string buscarGrupoString(int, int, int);
	string toStringGrupo();
	string toStringIterador();
	string toStringIteradorCiclo(int,int);
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
	if (primero == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
	
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
bool lista<T>::buscarCicloElectivo(int an, int ciclo)
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if ((actual->getInfo())->getAnio()== an && (actual->getInfo())->getCiclo()== ciclo)
		{
			return true;
		}
		actual = actual->getSig();
	}
	return false;
}

template<class T>
T* lista<T>::buscarCicloElectivo2(int an, int ciclo)
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if ((actual->getInfo())->getAnio() == an && (actual->getInfo())->getCiclo() == ciclo)
		{
			return actual->getInfo();
		}
		actual = actual->getSig();
	}
	return nullptr;
}

template<class T>
 bool lista<T>::buscarID(string ID)
{
	 nodo<T>* actual;
	 actual = primero;
	 while (actual)
	 {
		 if ((actual->getInfo())->getId() ==ID )
		 {
			 return true;
		 }
		 actual = actual->getSig();
	 }
	 return false;
}

template<class T>
 bool lista<T>::buscarCodigoCurso(string curso)
{
	 nodo<T>* actual;
	 actual = primero;
	 while (actual)
	 {
		 if ((actual->getInfo())->getCodigo() == curso)
		 {
			 return true;
		 }
		 actual = actual->getSig();
	 }
	 return false;
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

template<class T>
T* lista<T>::buscarNRC(int NRC)
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if ((actual->getInfo())->getNRC() == NRC)
		{
			return actual->getInfo();
		}
		actual = actual->getSig();
	}
	return nullptr;
}

template<class T>
string lista<T>::toStringGrupo()
{
	stringstream s;
	nodo<T>* actual;
	actual = primero;	
		while (actual->getSig() != nullptr)
		{
			s << (actual->getInfo())->toString3() << endl;
			s << "-------------------------" << endl;
			actual = actual->getSig();
		}
	return s.str();
}
template<class T>
string lista<T>::toStringIterador()
{
	stringstream s;
	nodo<T>* actual;
	actual = primero;
	while (actual->getSig() != nullptr)
	{
		if (actual->getInfo() != nullptr)
		{
			s << actual->getInfo() << endl;
		}
		actual = actual->getSig();
	}
	return s.str();
}

template<class T>
string lista<T>::toStringIteradorCiclo(int ciclo, int anio)
{
	stringstream s;
	nodo<T>* actual;
	actual = primero;
	while (actual->getSig() != nullptr)
	{
		if ((actual->getInfo())->getCiclo()->getCiclo() == ciclo && (actual->getInfo())->getCiclo()->getAnio() == anio)
		{
			s << (actual->getInfo())->toString() << endl;
		}
		actual = actual->getSig();
	}
	return s.str();
}

template<class T>
T* lista<T>::buscarGrupo(int cod, int anio,int ciclo)
{
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if (((actual->getInfo())->getCodCarrera() == cod) && ((actual->getInfo())->getCiclo()->getAnio() == anio) && ((actual->getInfo())->getCiclo()->getCiclo() == ciclo))
		{
			return actual->getInfo();
		}
		actual = actual->getSig();
	}
	return NULL;
}

template<class T>
string lista<T>::buscarGrupoString(int cod, int anio, int ciclo)
{
	stringstream s;
	nodo<T>* actual;
	actual = primero;
	while (actual)
	{
		if (((actual->getInfo())->getCodCarrera() == cod) && ((actual->getInfo())->getCiclo()->getAnio() == anio) && ((actual->getInfo())->getCiclo()->getCiclo() == ciclo))
		{
			s << (actual->getInfo())->toString();
		}
		actual = actual->getSig();
	}
	return s.str();
}

#endif // !LISTA_H
//