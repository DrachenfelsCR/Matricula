#include "profesor.h"

profesor::profesor(string id, string nombre, string clave, int tel, string escuela, string grado) : usuario(id, nombre, clave)
{
	this->telefono = tel;
	this->escuela = escuela;
	this->gradoAcademico = grado;
	usuario::rol = "usuario-profesor";
}

void profesor::setTelefono(int tel)
{
	this->telefono = tel;
}
void profesor::setEscuela(string escuela)
{
	this->escuela = escuela;
}
void profesor::setGradoA(string grado)
{
	this->gradoAcademico = grado;
}
int profesor::getTelefono()
{
	return this->telefono;
}
string profesor::getEscuela() 
{
	return this->escuela;
}
string profesor::getGradoA()
{
	return this->gradoAcademico;
}
string profesor::toString()
{
	stringstream s;
	s << usuario::toString();
	s << "Telefono: " << this->telefono << endl;
	s << "Escuela: " << this->escuela << endl;
	s << "Grado Academico: " << this->gradoAcademico << endl;
	return s.str();
}

profesor::~profesor()
{
}