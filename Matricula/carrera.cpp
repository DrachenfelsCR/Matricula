#include "carrera.h"

carrera::carrera(int codigo_carrera, string grado, string nombre_carrera, string facultad)
{
	this->estado = true;
	this->codigo_carrera = codigo_carrera;
	this->grado = grado;
	this->nombre_carrera = nombre_carrera;
	this->facultad = facultad;
	this->l1 = new lista<estudiante>;
}
void carrera::setCodigo(int codigo_carrera)
{
	this->codigo_carrera = codigo_carrera;
}
void carrera::setGrado(string grado)
{
	this->grado = grado;
}
void carrera::activarCarrera()
{
	this->estado = true;
}
void carrera::desactivarCarrera()
{
	this->estado = false;
}
void carrera::setFacultad(string facultad)
{
	this->facultad = facultad;
}
void carrera::setNombreCarrera(string nombre_carrera)
{
	this->nombre_carrera = nombre_carrera;
}
int carrera::getCodigo()
{
	return this->codigo_carrera;
}
string carrera::getNombre()
{
	return this->nombre_carrera;
}
string carrera::getGrado()
{
	return this->grado;
}
bool carrera::getEstado()
{
	return this->estado;
}
string carrera::getFacultad()
{
	return this->facultad;
}

void carrera::setPlan(plan_estudios plan)
{
	this->plan_carrera = plan;
}

plan_estudios carrera::getPlan()
{
	return this->plan_carrera;
}
lista<estudiante>* carrera::getPadron()
{
	return this->l1;
}
void carrera::setEscuela(string escuela)
{
	this->escuela = escuela;
}

string carrera::getEscuela()
{
	return this->escuela;
}
string carrera::toString()
{
	stringstream s;
	s << nombre_carrera <<":"<< endl;
	return s.str();
}
carrera::~carrera()
{
}


