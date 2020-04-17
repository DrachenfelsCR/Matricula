#include "sistema.h"

sistema::sistema()
{
	opc = 0;
	//----------AGREGADO ADMIN ESTANDAR---------------------
	lista_global = new lista<usuario>;
	admin* administrador = new admin("admin", "admin", "admin", "admin101");
	lista_global->insertarInicio(administrador);
	//------------------------------------------
	this->logged_user = nullptr;
	this->global_ciclos = new lista<ciclo_lectivo>;
	this->global_carrera = new lista<carrera>;
	this->global_cursos=new lista<curso>;
	this->global_estudiantes = new lista<estudiante>;
	this->global_profesores = new lista<profesor>;
}

void sistema::Principal()
{
	if (logged_user == nullptr)
	{
		ManejoLogeo();
		limpiaPantalla();
	}
	else
	limpiaPantalla();
	opc = 0;
	int can = 1;
	imprimirCadena(menuInicio());
	cout << "	[ Logeado como: " << *logged_user << " ] " << endl << endl;;
	imprimirCadena("	Digite el numero de la opcion que desea acceder:");
	do {
		opc = leerSeleccion(6);
		switch (opc)
		{
		case 1:
			ManejoSeguridadYAdministracion();
			break;
		case 2:
			ManejoDeMantenimiento();
			break;
		case 3:
			ManejoDeEscuelas();
			break;
		case 4:
			ManejoDeMatricula();
			break;
		case 5:
			ManejoDeRegistro();
			break;
		case 6:
			exit(0);
			break;
		}
	
	} while (can == 1);
}

void sistema::controlSistema()
{
	opc = 0;
	Principal();
	switch (opc)
	{
	case 1:
		ManejoSeguridadYAdministracion();
		break;
	case 2:
		ManejoDeMantenimiento();
		break;
	case 3:
		ManejoDeEscuelas();
		break;
	case 4:
		ManejoDeMatricula();
		break;
	case 5:
		ManejoDeRegistro();
		break;
	case 6:
		exit(0);
		break;
	}

}
void sistema::ManejoLogeo()
{
	string user_aux = "admin";
	string password = "admin101";
	/*imprimirCadena(LoginMenu());
	imprimirCadena("	Digite el nombre de su usuario");
	user_aux = leerCadena();
	imprimirCadena("	Digite su contrasena");
	password = leerCadena();*/
	try
	{
		if (lista_global->buscarCredenciales(user_aux, password) == nullptr)
		{
			throw 0;
		}
		else
		{
			this->logged_user = new string(user_aux);
		}
	}
	catch (...)
	{
		imprimirCadena("	Credenciales invalidos..");
		cin.get();
		limpiaPantalla();
		Principal();
	}
}

void sistema::ManejoSeguridadYAdministracion()
{
	limpiaPantalla();
	
	opc = 0;
	int cont = 1;
	do
	{
		imprimirCadena(menuSeguridad());
		opc = leerSeleccion(3);
		switch (opc)
		{
		case 1:
			agregarUsuario(lista_global);
			break;
		case 2:
			limpiaPantalla();
			imprimirCadena(lista_global->toString());
			break;
		case 3:
			Principal();
			break;
		}
		imprimirCadena("\t [Digite 1 para seguir en manejo de seguridad y admistracion] o [2 para volver al menu principal]: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }
		
	} while (cont == 1);
}

void sistema::ManejoDeMantenimiento()
{

	limpiaPantalla();
	opc = 0;
	int cont = 1;
	do
	{
		imprimirCadena(menuMantenimiento());
		opc = leerSeleccion(7);
		switch (opc)
		{
		case 1:
			imprimirCadena(this->global_ciclos->toString());	
			imprimirCadena("<Enter>");
			cin.get();
			break;
		case 2:
			agregarCiclo();
			imprimirCadena("<Enter>");
			cin.get();
			break;
		case 3:
			agregarCarrera();
			imprimirCadena("<Enter>");
			cin.get();
			break;
		case 4:
			limpiaPantalla();
			agregarCurso();
			imprimirCadena("<Enter>");
			cin.get();
			break;
		case 5:
			limpiaPantalla();
			imprimirCadena(this->global_carrera->toString());
			agregarEstudiante();
			imprimirCadena("<Enter>");
			cin.get();
			break;
		case 6:
			limpiaPantalla();
			MostrarEmpadronados();
			imprimirCadena("<Enter>");
			cin.get();
			break;
		case 7:
			Principal();
			break;

		}
		imprimirCadena("\t [Digite 1 para seguir en manejo de Mantenimiento General] o [2 para volver al menu principal]: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::ManejoDeEscuelas()
{
	limpiaPantalla();
	opc = 0;
	int cont = 1;
	do
	{
		imprimirCadena(menuEscuelas());
		opc = leerSeleccion(6);
		switch (opc)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			agregarProfesores();
			break;
		case 5:
			break;
		case 6:
			Principal();
			break;

		}
		imprimirCadena("\t[Digite 1 para seguir en manejo de Mantenimiento Por Escuelas] o [2 para volver al menu principal]: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::ManejoDeMatricula()
{
	limpiaPantalla();
	opc = 0;
	int cont = 1;
	do
	{
		imprimirCadena(menuMatricula());
		opc = leerSeleccion(4);
		switch (opc)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			Principal();
			break;

		}
		imprimirCadena("\t [Digite 1 para seguir en manejo de Matricula] o [2 para volver al menu principal]:");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::ManejoDeRegistro()
{
	limpiaPantalla();
	opc = 0;
	int cont = 1;
	do
	{
		imprimirCadena(menuRegistro());
		opc = leerSeleccion(3);
		switch (opc)
		{
		case 1:
			
			break;
		case 2:
			break;
		case 3:
			Principal();
			break;

		}
		imprimirCadena("\t Digite 1 para seguir en manejo de Registro o 2 para volver al menu principal: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::agregarUsuario(lista<usuario>* list)
{
	string id, nombre_usuario, nombre_completo, clave;
	int opc;
	imprimirCadena("Ingrese ID del usuario: ");
	id = leerCadena();
	imprimirCadena("Ingrese nombre completo del usuario: ");
	nombre_completo = leerCadena();
	imprimirCadena("Ingrese nickname o nombre de usuario: ");
	nombre_usuario = leerCadena();
	imprimirCadena("Digite la clave de acceso para el nuevo usuario: ");
	clave =leerCadena();
	while ((stringSix(clave) == false) || (stringUpperCase(clave) == false))
	{
		imprimirCadena("Por favor, utilice una combinacion de al menos una mayuscula y sea de un largo de 6 caracteres minimos");
		clave = leerCadena();
	}
	limpiaPantalla();
	imprimirCadena("Elija el rol del usuario");
	imprimirCadena("1-Usuario-Administrador");
	imprimirCadena("2-Usuario-Mantenimiento");
	imprimirCadena("3-Usuario-Registro");
	imprimirCadena("4-Usuario-Estudiante");
	imprimirCadena("5-Usuario-Profesor");
	opc = leerSeleccion(5);
	if (opc == 1)
	{
		admin* n_admin = new admin(id, nombre_usuario, nombre_completo, clave);
		list->insertarInicio(n_admin);
		imprimirCadena("Nuevo administrador creado..");
	}
	else if (opc == 2)
	{
		mantenimiento* n_mantenimiento = new mantenimiento(id, nombre_usuario, nombre_completo, clave);
		list->insertarInicio(n_mantenimiento);
		imprimirCadena("Nuevo usuario de mantenimiento creado..");
	}
	else if (opc == 3)
	{
		registro* n_registro = new registro(id, nombre_usuario, nombre_completo, clave);
		list->insertarInicio(n_registro);
		imprimirCadena("Nuevo usuario de registro creado..");
	}
	else if (opc == 4)
	{
		estudiante* n_estudiante = new estudiante(id, nombre_usuario, nombre_completo, clave,0,0);
		list->insertarInicio(n_estudiante);
		imprimirCadena("Nuevo estudiante creado..");
	}
	else if (opc == 5)
	{
		profesor* n_profesor = new profesor(id, nombre_usuario, nombre_completo, clave);
		list->insertarInicio(n_profesor);
		global_profesores->insertarFinal(n_profesor);
		imprimirCadena("Nuevo profesor creado..");
	}	
}

void sistema::agregarCiclo()
{
	int anio, numCiclo, dia, mes;
	imprimirCadena("Digite el anio del ciclo: ");
	anio = leerEntero();
	imprimirCadena("Digite numeracion( 1. I ciclo, 2. II Ciclo, 3. III Ciclo )");
	numCiclo = leerSeleccion(3);
	ciclo_lectivo* cicloAct = new ciclo_lectivo(anio, numCiclo);
	imprimirCadena("Ingrese la fecha de inicio: ");
	imprimirCadena(" Digite dia de inicio(numero entero): ");
	dia = leerEntero();
	imprimirCadena(" Digite mes de inicio(numero entero): ");
	mes = leerSeleccion(12);
	cicloAct->setFechaInicio(dia, mes, anio);
	//-------------------------------------------------------
	imprimirCadena("-------------------------------------------------");
	imprimirCadena("Ingrese la fecha de finalizacion: ");
	imprimirCadena(" Digite dia de finalizacion(numero entero): ");
	dia = leerEntero();
	imprimirCadena(" Digite mes de finalizacion(numero entero): ");
	mes = leerSeleccion(12);
	cicloAct->setFechaFinal(dia, mes, anio);
	this->global_ciclos->insertarFinal(cicloAct);
	imprimirCadena("<Enter>");
	cin.get();
}

void sistema::agregarCarrera()
{
	int codigo_carrera;
	string grado;
	string nombre_carrera;
	string facultad;
	string escuela;
//------------------------------------------------------------
	imprimirCadena("Ingrese codigo de carrera: ");
	codigo_carrera = leerEntero();
	imprimirCadena("Ingrese nombre de carrera: ");
	nombre_carrera = leerCadena();
	imprimirCadena("Grado: ");
	grado = leerCadena();
	carrera* career = new carrera(codigo_carrera, grado, nombre_carrera, facultad);
	imprimirCadena("Ingrese Escuela: ");
	escuela = leerCadena();
	career->setEscuela(escuela);
	imprimirCadena("Ingrese Facultad: ");
	facultad = leerCadena();
	career->setFacultad(facultad);
//------------------------------------------------------------
	global_carrera->insertarInicio(career);
}

void sistema::agregarCurso()
{
	string codigo;
	string nombre;
	string tipocurso;
	int creditos;
	int horasSemanales;
	
	imprimirCadena("Ingrese el codigo de la carrera");
	int a = leerEntero();
	if (global_carrera->buscarElemento(a))
	{
		carrera* aux = global_carrera->buscarCodigoCarrera(a);
		imprimirCadena(aux->toString());
		imprimirCadena("Ingrese el codigo del curso");
		codigo = leerCadena();
		imprimirCadena("Ingrese el nombre del Curso");
		nombre = leerCadena();
		imprimirCadena("Ingrese el Tipo de Curso(LAB,CUR,SEM,PRA,TEST)");
		tipocurso = leerCadena();
		imprimirCadena("Ingrese la Cantidad de Creditos");
		creditos = leerSeleccion(4);
		imprimirCadena("Ingrese las Horas Lectivas Semanales");
		horasSemanales = leerSeleccion(10);
		curso* Cursos = new curso(codigo,nombre,tipocurso,creditos,horasSemanales);
//-----------------------------------------------------------------------------------------
		global_cursos->insertarInicio(Cursos);
		aux->getPlan().insertarCurso(Cursos);

	}
	else {
		imprimirCadena("Error al digitar carrera o el numero de carrera no existe");
	}
}

void sistema::agregarEstudiante() {
	string id;
	string nombre;
	int telefono;
	int codigo;
	imprimirCadena("Ingrese cedula del nuevo Estudiante");
	id = leerCadena();
	imprimirCadena("Ingrese el nombre");
	nombre = leerCadena();
	imprimirCadena("Ingrese un Numero Telefonico");
	telefono = leerEntero();
	imprimirCadena("Ingrese el Numero de Carrera");
	int a = leerEntero();
	if (global_carrera->buscarElemento(a))
	{
		estudiante* estedu = new estudiante(id,"",nombre,"",telefono,a);
		global_estudiantes->insertarInicio(estedu);
		global_carrera->buscarCodigoCarrera(a)->getPadron()->insertarInicio(estedu);
		imprimirCadena(estedu->toString2());
		imprimirCadena(global_carrera->buscarCodigoCarrera(a)->toString());

		
	}
	else
	{
		imprimirCadena("Ingreso incorrectamente el numero de carrera o numero ingresado no existe");
	}
}

void sistema::MostrarEmpadronados()
{
	imprimirCadena("Ingrese codigo de carrera ");
	int a = leerEntero();
	if (global_carrera->buscarElemento(a))
	{
		imprimirCadena(global_carrera->buscarCodigoCarrera(a)->getPadron()->toString());
	}
	else
	{
		imprimirCadena("Ingreso incorrectamente el numero de carrera o numero ingresado no existe");
	}
}

void sistema::ConsultaPlan()
{
	imprimirCadena("Digite el plan de estudios: ");
	int a = leerEntero();
	if (global_carrera->buscarElemento(a))
	{
		carrera* aux = global_carrera->buscarCodigoCarrera(a);
		imprimirCadena(aux->getPlan().toString());
	}
}

void sistema::agregarProfesores()
{
	string id;
	try
	{
		imprimirCadena("Digite el codigo carrera: ");
		int a = leerEntero();
		if (global_carrera->buscarElemento(a))
		{
			carrera* aux = global_carrera->buscarCodigoCarrera(a);
			imprimirCadena(aux->toString());
		}
		imprimirCadena("Digite el id del profesor que desea asignar a una carrera: ");
		id = leerCadena();
		if (global_profesores->buscarId(id) == nullptr)
		{
			throw id;
		}
		else
			global_carrera->buscarCodigoCarrera(a)->getProfesores()->insertarFinal(global_profesores->buscarId(id));
			imprimirCadena("Profesor asignado correctamente a carrera");
	}
	catch (string id)
	{
		cout << "La cedula " << id << "no existe en el sistema, intente de nuevo.." << endl;
	}
	

}