#include "estudiante.h"

estudiante::estudiante(string id, string nombre, string clave, int tel, string escuela, int codigo, string carrera) : usuario(id, nombre, clave)
{
	this->telefono = tel;
	this->escuela = escuela;
	this->codigo_carrera = codigo;
	this->carrera = carrera;
	usuario::rol = "usuario-estudiante";
	//pendiente lista
}

estudiante::~estudiante()
{
}

void estudiante::setTelefono(int tel)
{
	this->telefono = tel;
}
void estudiante::setEscuela(string escuela)
{
	this->escuela = escuela;
}
void estudiante::setCodigo(int codigo)
{
	this->codigo_carrera = codigo;
}
int estudiante::getTelefono()
{
	return this->telefono;
}
string estudiante::getEscuela()
{
	return this->escuela;
}
int estudiante::getCodigo()
{
	return this->codigo_carrera;
}
string estudiante::toString()
{
	stringstream s;
	s << usuario::toString();
	s << "Telefono: " << this->telefono << endl;
	s << "Escuela: " << this->escuela << endl;
	s << "Carrera: " << this->carrera << endl;
	s << "Codigo de la carrera: " << this->codigo_carrera << endl;
	return s.str();

}