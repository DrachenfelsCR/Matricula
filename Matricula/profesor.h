#ifndef PROFESOR_H
#define PROFESOR_H
#include "usuario.h"

class profesor : public usuario
{
protected:
	int telefono;
	string escuela;
	string gradoAcademico;
	//listas grupos pendiente
public:
	profesor(string, string, string, int, string, string);
	void setTelefono(int);
	void setEscuela(string);
	void setGradoA(string);
	int getTelefono();
	string getEscuela();
	string getGradoA();
	string toString();
	~profesor();



};



#endif // !PROFESOR_H
