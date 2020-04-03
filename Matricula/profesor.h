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
//  lista grupos
public:
	profesor(string, string, string, string, int, string, string);
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
