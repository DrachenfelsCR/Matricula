






#include <iostream>
#include <sstream>
#ifndef USUARIO_H
#define USUARIO_H

using namespace std;
class usuario
{
protected:
	string id;
	string nombre;
	string clave;
	bool estado;
	string rol;

public:
	usuario();
	usuario(string, string, string);
	void setId(string);
	void setNombre(string);
	void setClave(string);
	string getId();
	string getNombre();
	string getClave();
	bool getEstado();
	string getRol();
	string toString();
	~usuario();


};
#endif // !USUARIO_H



