#include "curso.h"

curso::curso()
{
	this->codigo_curso = "";
	this->tipo_curso = "";
	this->creditos = 0;
	this->horas_semanales = 0;
	this->estado = true;
	this->listaReq = new lista<string>;
}

curso::curso(string codigo_curso, string nombre_curso, string tipo_curso, int creditos, int horas)
{
	this->codigo_curso = codigo_curso;
	this->nombre_curso = nombre_curso;
	this->tipo_curso = tipo_curso;
	this->creditos = creditos;
	this->horas_semanales = horas;
	this->estado = true;
	this->listaReq = new lista<string>;
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
void curso::insertarRequisito(string* req)
{
	this->listaReq->insertarInicio(req);
}

lista<string>* curso::getlistaReq()
{
	return this->listaReq;
}

string curso::toString()
{
	stringstream s;
	s <<"Codigo curso: "<< codigo_curso << endl;
	s <<"Nombre de curso: "<< nombre_curso << endl;
	s << "Horas semanales: " << horas_semanales << endl;
	s << "Creditos: " <<creditos << endl;
	s << "Tipo de curso: "<< tipo_curso << endl;
	return s.str();
}
string curso::toString2()
{
	stringstream s;
	s << codigo_curso << "		" << nombre_curso << "		" << creditos << this->listaReq->toStringIterador() << endl;
	return s.str();
}

curso::~curso()
{
}

