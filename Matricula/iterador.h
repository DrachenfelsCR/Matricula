#ifndef ITERADOR_H
#define ITERADOR_H
#include <iostream>
#include "lista.h"
#include "estudiante.h"
#include "admin.h"
#include "curso.h"
#include "mantenimiento.h"
#include "profesor.h"

using namespace std;
template <class T>
class  iterador : public lista<T>
{
private:
	nodo<T>* primero;
public:
	iterador(nodo<T>*);
	void recuperarEst(lista<estudiante>*, string);
};

template <class T>
iterador<T>::iterador(nodo<T>* primero)
{
	this->primero = primero;
}

template<class T>
void iterador<T>::recuperarEst(lista<estudiante>* list1, string archivo)
{
	string id;
	string nombre_usuario;
	string nombre_completo;
	string clave;
	string estado;
	string rol;
	int telefono;
	string escuela;
	int codigo_carrera;
	string carrera;
	ifstream input;
	input.open(archivo.c_str());
	while (input.good())
	{
		getline(input, id, '\t');
		getline(input, nombre_usuario, '\t');
		getline(input, nombre_completo, '\t');
		getline(input, clave, '\t');
		getline(input, estado, '\t');
		getline(input, rol, '\n');
		if (!input.eof())
		{
			

		}
	}

}


#endif // !ITERADOR_H

