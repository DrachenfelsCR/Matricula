#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "usuario.h"
#include "curso.h"
#include "curso_estudiante.h"
class estudiante : public usuario
{

protected:
	int telefono;
	string escuela;
	int codigo_carrera;
	string carrera;
	lista<curso_estudiante>* l1;
public:
	estudiante(string, string, string, string,int,int);
	~estudiante();
	void setTelefono(int);
	void setEscuela(string);
	void setCodigo(int);
	void setCarrera(string);
	int getTelefono();
	string getEscuela();
	int getCodigo();
	string getCarrera();
	string toString();
	string toString2();
};

#endif // !ESTUDIANTE_H
