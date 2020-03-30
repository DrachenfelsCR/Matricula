#include "usuario.h"

usuario::usuario()
{
	this->id = "";
	this->nombre = "";
	this->clave = "";
	this->estado = true;
	this->rol = "";
}

usuario::usuario(string id, string nombre, string clave, string rol)
{
	this->id = id;
	this->nombre = nombre;
	this->clave = clave;
	this->estado = true;
	this->rol = "";
}


usuario::~usuario()
{
}