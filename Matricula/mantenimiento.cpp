#include "mantenimiento.h"

mantenimiento::mantenimiento(string id, string nombre, string clave) : usuario(id,nombre,clave)
{
	usuario::rol = "usuario-mantenimiento";
}

mantenimiento::~mantenimiento()
{
}