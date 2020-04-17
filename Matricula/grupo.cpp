#include "grupo.h"

grupo::grupo(int NRC, string codigo_curso, string nombre_curso, int creditos, string id_profesor, int cupo, int numeroGrupo, string horaIncio, string horaFinal)
{
	this->lista_E = nullptr;
	this->lista_N = nullptr;
	this->ciclo = nullptr;
	this->NRC = NRC;
	this->horaInicio = horaIncio;
	this->horaFinal = horaFinal;
	this->cupo = cupo;
	this->numeroGrupo = numeroGrupo;
	this->codigo_curso = codigo_curso;
	this->nombre_curso = nombre_curso;
	this->id_profesor = id_profesor;
	this->creditos = creditos;
}

grupo::~grupo()
{ 
}
void grupo::setCupo(int cupo)
{
	this->cupo = cupo;
}
void grupo::setNRC(int NRC)
{
	this->NRC = NRC;
}
void grupo::setCodigo(string codigo_curso)
{
	this->codigo_curso = codigo_curso;
}
void grupo::setNumeroGrupo(int numeroGrupo)
{
	this->numeroGrupo = numeroGrupo;
}
void grupo::setNombre(string nombre_curso)
{
	this->nombre_curso = nombre_curso;
}
void grupo::setHoraInicio(string horaInicio)
{
	this->horaInicio = horaInicio;
}
void grupo::setHoraFinal(string horaFinal)
{
	this->horaFinal = horaFinal;
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
int grupo::getCupo() {
	return cupo;
}
string grupo::getHoraInicio()
{
	return horaInicio;
}
string grupo::getHoraFinal()
{
	return horaFinal;
}
int grupo::getNumeroGrupo()
{
	return numeroGrupo;
}
int grupo::getNRC()
{
	return this->NRC;
}
string grupo::getCodigo()
{
	return this->codigo_curso;
}

string grupo::toString()
{
	stringstream s;
		s << " Curso" << " NCR" << "Grupo" << "Cupo" << "Horario" << endl;
		s << codigo_curso << NRC << numeroGrupo << cupo << horaInicio << horaFinal << endl;
		return s.str();
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

string grupo::toStringEstudiantes()
{
	stringstream s;
	s << this->lista_E->toStringGrupo() << endl;
	return s.str();
}
lista<nota>* grupo::getListaNotas()
{
	return this->lista_N;
}