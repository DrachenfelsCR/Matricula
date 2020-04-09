#include "plan_estudios.h"

plan_estudios::plan_estudios()
{
	this->nombre_carrera = "";
	this->l1 = nullptr;
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
	return string();
}
/*void plan_estudios::eliminarCurso(curso* cur)
{
	this->l1->eliminarEspecifico(cur);
}*/
