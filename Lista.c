#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno {
	char nombre[100];
	int creditosAprobados;
	int semestreEquivalente;
};

typedef struct Alumno Alumno;

struct Nodo {
	Alumno dato;
	struct Nodo *siguiente;
};

typedef struct Nodo Nodo;

// Prototipos de funciones
Alumno *crearAlumno(char nombre[], int creditos, int semestre);
void imprimirAlumno(Alumno *alumno);
Nodo *crearNodo(Alumno *alumno);
int insertarNodoOrdenadoCreditos(Nodo **lista, Nodo *nodo);
void imprimirLista(Nodo *lista);

int main(){
	
	Nodo *lista = NULL;
	
	Alumno *alumno1 = crearAlumno("America America", 100, 5);
	Alumno *alumno2 = crearAlumno("Armando Miranda", 90, 4);
	Alumno *alumno3 = crearAlumno("Xavy Dzib", 110, 6);
	Alumno *alumno4 = crearAlumno("Cody Pinguino", 70, 3);
	Alumno *alumno5 = crearAlumno("Pepe Pollo", 80, 1);
	
	insertarNodoOrdenadoCreditos(&lista, crearNodo(alumno1));
	insertarNodoOrdenadoCreditos(&lista, crearNodo(alumno2));
	insertarNodoOrdenadoCreditos(&lista, crearNodo(alumno3));
	insertarNodoOrdenadoCreditos(&lista, crearNodo(alumno4));
	insertarNodoOrdenadoCreditos(&lista, crearNodo(alumno5));
	
	imprimirLista(lista);
	
	return 0;
}

Alumno *crearAlumno(char nombre[], int creditos, int semestre) {
	Alumno *alumno = (Alumno *)malloc(sizeof(Alumno));
	strcpy(alumno->nombre, nombre);
	alumno->creditosAprobados = creditos;
	alumno->semestreEquivalente = semestre;
	return alumno;
}

Nodo *crearNodo(Alumno *alumno) {
	Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
	nodo->dato = *alumno;
	nodo->siguiente = NULL;
	return nodo;
}

