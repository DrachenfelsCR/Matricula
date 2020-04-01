#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include "lista.h"
using namespace std;
class curso
{
private:
	string codigo_curso;
	string nombre_curso;
	string tipo_curso;
	int creditos;
	int horas_semanales;
	bool estado;
	lista<string>* l1;
public:
	curso(string, string, string, int, int);
	void setCodigo(string);
	void setNombre(string);
	void setTipo(string);
	void setCreditos(int);
	void setHoras(int);
	void setEstado(bool);
	string getCodigo();
	string getNombre();
	string getTipo();
	int getCreditos();
	int getHoras();
	bool getEstado();
	void insertarRequisito(string*);
	~curso();


};




#endif // !CURSO_H