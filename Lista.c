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
	
	
	
	return 0;
}
