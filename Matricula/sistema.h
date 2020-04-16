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
#include "ciclo_lectivo.h"
#include "carrera.h"
using namespace std;

class sistema {


private:
	int opc;
	string* logged_user;
	lista<ciclo_lectivo>* global_ciclos;
	lista<carrera>* global_carrera;
	lista<estudiante>* global_estudiantes;
	lista<curso>* global_cursos;
public:
	//--------------------------------------
	sistema();
	void Principal();
	void controlSistema();
	void ManejoSeguridadYAdministracion();
	void ManejoDeMantenimiento();
	void ManejoDeEscuelas();
	void ManejoDeMatricula();
	void ManejoDeRegistro();
	void ManejoLogeo();
	//------Funciones secundarias-----------
	lista<usuario>* lista_global;
	void agregarUsuario(lista<usuario>*);
	void agregarCiclo();
	void agregarCarrera();
	void agregarCurso();
	void agregarEstudiante();
	void MostrarEmpadronados();
	void ConsultaPlan();
};


























#endif