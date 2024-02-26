#include <stdio.h>
#define X 3
void main() {

}
**********************************************************************************************
/*

Crear un tablero 6x6
Se representa el peon como 1 y la reina como 2

*/
#include <iostream>
using namespace std;

//Colocar fichas

void main() {
	//Declaramos las dimensiones del tablero
	const int f = 6;
	const int c = 6;
	/*Caracteristicaws básicas de una pieza
	-Mover
	-Eliminar
	*/

	//FICHAS
	enum fichas { peon = 1, reina };
	//Asignamos al peon el valor del numero 1 y a la reina de 2

	//TABLERO
	int tablero[f][c] = { {0,0,reina,0,0,0},{peon,peon,peon,peon,peon,peon},
		{0,0,0,0,0,0},{0,0,0,0,0,0},{peon,peon,peon,peon,peon,peon},
		{0,0,0,reina,0,0} };//Tablero 6x6
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			cout << tablero[i][j];
			cout << " ";

		}
		cout << endl;
	}

}

//Colocar fichas


