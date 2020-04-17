#ifndef CURSO_ESTUDIANTE_H
#define CURSO_ESTUDIANTE_H
#include <iostream>
using namespace std;
class curso_estudiante
{
private:
	string codigo_curso;
	string nombre_curso;
	int creditos;
	float nota;
public:
	void setCodigo(string);
	void setNombre(string);
	void setCreditos(int);
	void setNota(float);
	string getCodigo();
	string getNombre();
	int getCreditos();
	float getNota();
	curso_estudiante(string, string, int, float);
	~curso_estudiante();
	//
};



#endif // !CURSO_ESTUDIANTE_H
