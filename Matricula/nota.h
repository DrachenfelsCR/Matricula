#ifndef NOTA_H
#define NOTA_H
#include <iostream>

using namespace std;

class nota
{
private:
	float calificacion;
	string id;
public:
	nota(float, string);
	~nota();
	float getNota();
	string getID();
	void setNota(float);
	void setID(string);
	

};


#endif // !NOTA_H








