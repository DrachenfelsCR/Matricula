#include <iostream>

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
	usuario(string, string, string, string);
	void setId();
	void setNombre();
	void setClave();
	void setEstado();
	string getId();
	string getNombre();
	string getClave();
	bool getEstado();
	string getRol();
	~usuario();


};

