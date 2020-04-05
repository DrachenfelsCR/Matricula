#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "usuario.h"

class estudiante : public usuario
{

protected:
	int telefono;
	string escuela;
	int codigo_carrera;
	string carrera;
	//Pendiente agregar lista de cursos
public:
	estudiante(string, string, string, string);
	~estudiante();
	void setTelefono(int);
	void setEscuela(string);
	void setCodigo(int);
	void setCarrera(string);
	int getTelefono();
	string getEscuela();
	int getCodigo();
	string toString();
};

#endif // !ESTUDIANTE_H
