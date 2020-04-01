#ifndef PLAN_ESTUDIOS_H
#define PLAN_ESTUDIOS_H
#include <iostream>
#include <sstream>
#include "lista.h"
#include "curso.h"
using namespace std;
class plan_estudios
{
private:
	string nombre_carrera;
	lista<curso>* l1;
public:
	plan_estudios();
	void setNombreCarrera(string);
	void insertarCurso(curso*);
	void eliminarCurso(curso*);
	string toString();
	// falta implementacion
	~plan_estudios();

};

#endif // !PLAN_ESTUDIOS_H


