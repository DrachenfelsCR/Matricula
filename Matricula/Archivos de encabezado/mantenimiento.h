#ifndef MANTENIMIENTO_H
#define MANTENIMIENTO_H
#include "usuario.h"

class mantenimiento : public usuario
{
public:
	mantenimiento(string, string, string);
	~mantenimiento();

};



#endif // !MANTENIMIENTO_H
