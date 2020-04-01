#include "admin.h"

admin::admin(string id, string nombre, string clave) : usuario(id, nombre, clave)
{
	usuario::rol = "usuario-admin";
}

admin::~admin()
{
}