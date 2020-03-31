#include "usuario.h"

usuario::usuario()
{
	this->id = "";
	this->nombre = "";
	this->clave = "";
	this->estado = true;
	this->rol = "";
}

usuario::usuario(string id, string nombre, string clave)
{
	this->id = id;
	this->nombre = nombre;
	this->clave = clave;
	this->estado = true;
	this->rol = "";
}


string usuario::getClave()
{
	return this->clave;
}

usuario::~usuario()
{

}

void usuario::setId(string id)
{
	this->id = id;
}
void usuario::setNombre(string nombre)
{
	this->nombre = nombre;
}
void usuario::setClave(string clave)
{
	this->clave = clave;
}
string usuario::getId()
{
	return this->id;
}
string usuario::getNombre()
{
	return this->nombre;
}

bool usuario::getEstado()
{
	return this->estado;
}
string usuario::getRol()
{
	return this->rol;
}

string usuario::toString()
{
	stringstream s;
	s << "ID: " << this->id << endl;
	s << "Nombre: " << this->nombre << endl;
	if (this->estado)
	{
		s << "Estado: " << "Activo" << endl;;
	}
	else
		s << "Estado: " << "Desactivado" << endl;
	s << "Tipo de usuario: " << this->rol;
	return s.str();
}