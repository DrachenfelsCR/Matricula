#ifndef PROFESOR_H
#define PROFESOR_H
#include "usuario.h"
#include "lista.h"
class profesor : public usuario
{
protected:
	int telefono;
	string escuela;
	string gradoAcademico;
	string carrera;
public:
	profesor(string, string, string, string);
	void setTelefono(int);
	void setEscuela(string);
	void setGradoA(string);
	void setCarrera(string);
	int getTelefono();
	string getEscuela();
	string getGradoA();
	string toString();
	string getCarrera();
	~profesor();



};



#endif // !PROFESOR_H
