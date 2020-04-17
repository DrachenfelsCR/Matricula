#ifndef NOTA_H
#define NOTA_H
#include <iostream>

using namespace std;

class nota
{
private:
	float calificacion;
	string id;
	string nombre;
public:
	nota(float, string, string);
	~nota();
	float getNota();
	string getId();
	void setNota(float);
	void setID(string);
	

};


#endif // !NOTA_H








