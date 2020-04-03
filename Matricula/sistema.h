#ifndef SISTEMA_H
#define SISTEMA_H
#include "utiles.h"
#include <iostream>
#include "usuario.h"
#include "admin.h"
#include "mantenimiento.h"
#include "profesor.h"
#include "estudiante.h"
#include "registro.h"
using namespace std;

class sistema {


private:
	int opc;


public:
	sistema();
	void Principal();
	void controlSistema();
	void ManejoSeguridadYAdministracion();
	void ManejoDeMantenimiento();
	void ManejoDeEscuelas();
	void ManejoDeMatricula();
	void ManejoDeRegistro();
	lista<admin>* lista_global;





};


























#endif