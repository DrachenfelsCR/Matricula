#ifndef GRUPO_H
#define GRUPO_H
#include "lista.h"
#include "ciclo_lectivo.h"
#include "estudiante.h"
#include "nota.h"

class grupo
{
private:
	lista<estudiante>* lista_E;
	lista<nota>* lista_N;
	int NRC;
	string codigo_curso;
	string nombre_curso;
	int creditos;
	string id_profesor;
	ciclo_lectivo* ciclo;

public:
	grupo(int, string, string, int, string);
	//LISTA
	//LISTA
	void setNRC(int);
	void setCodigo(string);
	void setNombre(string);
	void setCreditos(int);
	void setID(string);
	void setCiclo(ciclo_lectivo*);
	int getNRC();
	string getCodigo();
	string getNombre();
	int getCreditos();
	string getID();
	ciclo_lectivo* getCiclo();
	~grupo();


};



#endif // !GRUPO_H
