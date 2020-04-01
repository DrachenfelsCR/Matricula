#include "curso_estudiante.h"

curso_estudiante::curso_estudiante(string codigo_curso, string nombre_curso, int creditos, float nota)
{
	this->codigo_curso = codigo_curso;
	this->nombre_curso = nombre_curso;
	this->creditos = creditos;
	this->nota = nota;
}
void curso_estudiante::setCodigo(string codigo_curso)
{
	this->codigo_curso = codigo_curso;
}
void curso_estudiante::setNombre(string nombre_curso)
{
	this->nombre_curso = nombre_curso;
}
void curso_estudiante::setCreditos(int creditos)
{
	this->creditos = creditos;
}
void curso_estudiante::setNota(float nota)
{
	this->nota = nota;
}
string curso_estudiante::getCodigo()
{
	return this->codigo_curso;
}
string curso_estudiante::getNombre() 
{
	return this->nombre_curso;
}
int curso_estudiante::getCreditos()
{
	return this->creditos;
}
float curso_estudiante::getNota()
{
	return this->nota;
}

curso_estudiante::~curso_estudiante()
{
}