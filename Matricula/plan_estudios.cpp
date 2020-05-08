#include "plan_estudios.h"

plan_estudios::plan_estudios()
{
	this->nombre_carrera = "";
	this->l1 = new lista<curso>;
}

plan_estudios::~plan_estudios()
{
}

void plan_estudios::setNombreCarrera(string nombre)
{
	this->nombre_carrera = nombre;
}
void plan_estudios::insertarCurso(curso* cur)
{
	this->l1->insertarInicio(cur);
}
string plan_estudios::toString()
{
	stringstream s;
	s << this->l1->toString();
	return s.str();
}
lista<curso>*plan_estudios::getListaCurso()
{
	return this->l1;
}

void plan_estudios::save(ofstream& outp)
{
	nodo<curso>* actual = this->getListaCurso()->primero;
	while (actual->getSig() != nullptr)
	{

	}
}

