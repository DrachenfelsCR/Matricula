#ifndef PROFESOR_H
#define PROFESOR_H
#include "usuario.h"
#include "grupo.h"
#include "lista.h"
class profesor : public usuario
{
protected:
	int telefono;
	string escuela;
	string gradoAcademico;
	lista<grupo>* group;
public:
	profesor(string, string, string, string);
	void setTelefono(int);
	void setEscuela(string);
	void setGradoA(string);
	int getTelefono();
	lista<grupo>*getGrupo();
	string getEscuela();
	string getGradoA();
	string toString();
	~profesor();



};



#endif // !PROFESOR_H
