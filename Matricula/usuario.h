#include <iostream>

using namespace std;
class usuario
{
private:
	string id;
	string nombre;
	string clave;
	bool estado;
	string rol;

public:
	usuario();
	usuario(string, string, string, string);
	void setId(string);
	void setNombre(string);
	void setClave(string);
	string getId();
	string getNombre();
	string getClave();
	bool getEstado();
	string getRol();
	~usuario();


};

