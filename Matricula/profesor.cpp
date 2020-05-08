#include "profesor.h"

profesor::profesor(string id, string nombre_usuario, string nombre_completo, string clave) : usuario(id, nombre_usuario, nombre_completo, clave)
{
	this->group = new lista<grupo>;
	usuario::rol = "usuario-profesor";
}

void profesor::setTelefono(int tel)
{
	this->telefono = tel;
}
void profesor::setEscuela(string escuela)
{
	this->escuela = escuela;
}
void profesor::setGradoA(string grado)
{
	this->gradoAcademico = grado;
}

void profesor::setCarrera(string carrera)
{
	this->carrera = carrera;
}
int profesor::getTelefono()
{
	return this->telefono;
}
lista<grupo>* profesor::getGrupo()
{
	return group;
}
string profesor::getEscuela() 
{
	return this->escuela;
}
string profesor::getGradoA()
{
	return this->gradoAcademico;
}

string profesor::getCarrera()
{
	return this->carrera;
}

string profesor::toString()
{
	stringstream s;
	s << usuario::toString();
	s << "Telefono: " << this->telefono << endl;
	s << "Escuela: " << this->escuela << endl;
	s << "Grado Academico: " << this->gradoAcademico << endl;
	return s.str();
}

profesor::~profesor()
{
}

void profesor::save(ofstream&)
{

}
