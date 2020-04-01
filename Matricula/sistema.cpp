#include "sistema.h"

sistema::sistema()
{
	opc = 0;
}

void sistema::Principal()
{
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

void sistema::ManejoSeguridadYAdministracion()
{
	limpiaPantalla();
	imprimirCadena(menuSeguridad());
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