#include "sistema.h"

sistema::sistema()
{
	opc = 0;
	//----------AGREGADO ADMIN ESTANDAR---------------------
	lista_global = new lista<usuario>;
	admin* administrador = new admin("admin", "admin", "admin", "admin101");
	lista_global->insertarInicio(administrador);
	//------------------------------------------
}

void sistema::Principal()
{
	ManejoLogeo();
	limpiaPantalla();
	opc = 0;
	int can = 1;
	imprimirCadena(menuInicio());
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
	string user_aux;
	string password;
	imprimirCadena(LoginMenu());
	imprimirCadena("	Digite el nombre de su usuario");
	user_aux = leerCadena();
	imprimirCadena("	Digite su contrasena");
	password = leerCadena();
	try
	{
		if (lista_global->buscarCredenciales(user_aux, password) == nullptr)
		{
			throw 0;
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
	imprimirCadena(menuSeguridad());
	opc = 0;
	int cont = 1;
	do
	{
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
		imprimirCadena("\t Digite 1 para seguir en manejo de seguridad y admistracion o 2 para volver al menu principal: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }
		
	} while (cont == 1);
}

void sistema::ManejoDeMantenimiento()
{
	limpiaPantalla();
	imprimirCadena(menuMantenimiento());
	opc = 0;
	int cont = 1;
	do
	{
		leerSeleccion(7);
		switch (opc)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			Principal();
			break;

		}
		imprimirCadena("\t Digite 1 para seguir en manejo de Mantenimiento General o 2 para volver al menu principal: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::ManejoDeEscuelas()
{
	limpiaPantalla();
	imprimirCadena(menuEscuelas());
	opc = 0;
	int cont = 1;
	do
	{
		leerSeleccion(6);
		switch (opc)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			Principal();
			break;

		}
		imprimirCadena("\t Digite 1 para seguir en manejo de Mantenimiento Por Escuelas o 2 para volver al menu principal: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::ManejoDeMatricula()
{
	limpiaPantalla();
	imprimirCadena(menuMatricula());
	opc = 0;
	int cont = 1;
	do
	{
		leerSeleccion(4);
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
		imprimirCadena("\t Digite 1 para seguir en manejo de Matricula o 2 para volver al menu principal: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { Principal(); }

	} while (cont == 1);
}

void sistema::ManejoDeRegistro()
{
	limpiaPantalla();
	imprimirCadena(menuRegistro());
	opc = 0;
	int cont = 1;
	do
	{
		leerSeleccion(3);
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
		estudiante* n_estudiante = new estudiante(id, nombre_usuario, nombre_completo, clave);
		list->insertarInicio(n_estudiante);
		imprimirCadena("Nuevo estudiante creado..");
	}
	else if (opc == 5)
	{
		profesor* n_profesor = new profesor(id, nombre_usuario, nombre_completo, clave);
		list->insertarInicio(n_profesor);
		imprimirCadena("Nuevo profesor creado..");
	}
		
	
	
}