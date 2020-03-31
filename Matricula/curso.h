#ifndef CURSO_H
#define CURSO_H
#include <iostream>
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
	//lista string requisitos pendiente
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
	~curso();


};




#endif // !CURSO_H
