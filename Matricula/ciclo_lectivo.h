#ifndef CICLO_LECTIVO_H
#define CICLO_LECTIVO_H
#include <iostream>
#include <sstream>
using namespace std;
class ciclo_lectivo
{
private:
	int anio;
	int ciclo;
	string fechaInicio;
	string fechaFinal;
public:
	ciclo_lectivo(int,int);
	void setAnio(int);
	void setCiclo(int);
	void setFechaInicio(int,int,int);
	void setFechaFinal(int,int,int);
	int getAnio();
	int getCiclo();
	string getFechaInicio();
	string getFechaFinal();
	string toString();
	~ciclo_lectivo();



};



#endif // !CICLO_LECTIVO_H
