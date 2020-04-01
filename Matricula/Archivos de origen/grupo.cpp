#include "grupo.h"

grupo::grupo(int NRC, string codigo_curso, string nombre_curso, int creditos, string id_profesor)
{
	this->lista_E = nullptr;
	this->lista_N = nullptr;
	this->ciclo = nullptr;
	this->NRC = NRC;
	this->codigo_curso = codigo_curso;
	this->nombre_curso = nombre_curso;
	this->id_profesor = id_profesor;
	this->creditos = creditos;
}

grupo::~grupo()
{ 
}

void grupo::setNRC(int NRC)
{
	this->NRC = NRC;
}
void grupo::setCodigo(string codigo_curso)
{
	this->codigo_curso = codigo_curso;
}
void grupo::setNombre(string nombre_curso)
{
	this->nombre_curso = nombre_curso;
}
void grupo::setCreditos(int creditos)
{
	this->creditos = creditos;
}
void grupo::setID(string id_profesor)
{
	this->id_profesor = id_profesor;
}
void grupo::setCiclo(ciclo_lectivo* ciclo)
{
	this->ciclo = ciclo;
}
int grupo::getNRC()
{
	return this->NRC;
}
string grupo::getCodigo()
{
	return this->codigo_curso;
}
string grupo::getNombre()
{
	return this->nombre_curso;
}
int grupo::getCreditos()
{
	return this->creditos;
}
string grupo::getID()
{
	return this->id_profesor;
}
ciclo_lectivo* grupo::getCiclo()
{
	return this->ciclo;
}