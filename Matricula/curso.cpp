#include "curso.h"

curso::curso(string codigo_curso, string nombre_curso, string tipo_curso, int creditos, int horas)
{
	this->codigo_curso = codigo_curso;
	this->nombre_curso = nombre_curso;
	this->tipo_curso = tipo_curso;
	this->creditos = creditos;
	this->horas_semanales = horas;
	this->estado = true;
}
void curso::setCodigo(string codigo_curso)
{
	this->codigo_curso = codigo_curso;
}
void curso::setNombre(string nombre_curso)
{
	this->nombre_curso = nombre_curso;
}
void curso::setTipo(string tipo_curso)
{
	this->tipo_curso = tipo_curso;
}
void curso::setCreditos(int creditos)
{
	this->creditos = creditos;
}
void curso::setHoras(int horas)
{
	this->horas_semanales = horas;
}
void curso::setEstado(bool estado)
{
	this->estado = estado;
}
string curso::getCodigo()
{
	return this->codigo_curso;
}
string curso::getNombre()
{
	return this->nombre_curso;
}
string curso::getTipo()
{
	return this->tipo_curso;
}

int curso::getCreditos()
{
	return this->creditos;
}

int curso::getHoras()
{
	return this->horas_semanales;
}

bool curso::getEstado()
{
	return this->estado;
}

curso::~curso()
{
}
