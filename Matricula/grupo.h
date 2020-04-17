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
	int numeroGrupo;
	string codigo_curso;
	string nombre_curso;
	int creditos;
	string horaInicio;
	string horaFinal;
	string id_profesor;
	ciclo_lectivo* ciclo;
	int cupo;
	string horarioDia;

public:
	grupo(int, string, string, int, string,int,int,string,string);
	
	//LISTA
	void setNRC(int);
	void setCupo(int);
	void setCodigo(string);
	void setNumeroGrupo(int);
	void setNombre(string);
	void setHoraInicio(string);
	void setHoraFinal(string);
	void setCreditos(int);
	void setID(string);
	void setCiclo(ciclo_lectivo*);
	int getNRC();
	int getCupo();
	string getHoraInicio();
	string getHoraFinal();
	int getNumeroGrupo();
	string getCodigo();
	string toString();
	string toStringEstudiantes();
	string getNombre();
	int getCreditos();
	string getID();
	ciclo_lectivo* getCiclo();
	lista<estudiante>* getEstudiantes();
	lista<nota>* getListaNotas();
	~grupo();


};



#endif // !GRUPO_H
