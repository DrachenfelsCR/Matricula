#ifndef CARRERA_H
#define CARRERA_h
#include <iostream>
#include <sstream>

using namespace std;

class carrera
{
private:
	int codigo_carrera;
	string nombre_carrera;
	string grado;
	bool estado;
	string facultad;
	//pendiente lista cursos

public:
	carrera(int, string, string, string);
	void setCodigo(int);
	void setGrado(string);
	void activarCarrera();
	void desactivarCarrera();
	void setFacultad(string);
	void setNombreCarrera(string);
	int getCodigo();
	string getNombre();
	string getGrado();
	bool getEstado();
	string getFacultad();
	~carrera();


};



#endif // !CARRERA_H
