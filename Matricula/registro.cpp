#include "registro.h"

registro::registro(string id, string nombre, string clave) : usuario(id, nombre, clave)
{
	usuario::rol = "usuario-registro";
}

registro::~registro()
{
}
