#include "nota.h"

nota::nota(float nota, string id)
{
	this->calificacion = nota;
	this->id = id;
}

void nota::setNota(float nota)
{
	this->calificacion = nota;
}

void nota::setID(string id)
{
	this->id = id;
}

float nota::getNota()
{
	return this->calificacion;
}

string nota::getID()
{
	return this->id;
}

nota::~nota()
{
}