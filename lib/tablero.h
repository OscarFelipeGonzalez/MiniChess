#include <iostream>
#include <math.h>
#include <fstream>
enum Piezas { VACIO = 0, PEON, TORRE, ALFIL, CABALLO, REY, REINA };

using namespace std;

class Tablero
{
public:
	//Declaración de la matriz del tablero
	Tablero(int x, int y) : dim_x (x), dim_y(y) 
	{
		// Declara el tablero y lo inicializa a cero
		tab = new int*[dim_x];
		for (int i = 0; i < dim_x; i++)
		{
			*(tab + i) = new int[dim_y];
		}
		for (int i = 0; i < dim_x; i++)
		{
			for (int j = 0; j < dim_y; j++)
			{
				tab[i][j] = 0;
			}
		}
	}
	Tablero(ifstream* file)
	{
		// Declara el tablero y lee un archivo. A partir de este inicializa la matriz del tablero.
		// El formato del tablero es (todo separado por espacios) : dim_x, dim_y, valores de la matriz
		if (!(*file).is_open())
		{
			std::cout << "Error en la apertura del archivo" << std::endl;
		}
		*file >> dim_x;
		*file >> dim_y;
		tab = new int* [dim_x];
		for (int i = 0; i < dim_x; i++)
		{
			*(tab + i) = new int[dim_y];
		}
		int prov = 0;
		for (int i = 0; i < dim_x; i++)
		{
			for (int j = 0; j < dim_y; j++)
			{
				*file >> prov;
				tab[i][j] = prov;
			}
		}
		(*file).close();
	}
	void print()
	{
		for (int i = 0; i < dim_x; i++)
		{
			for (int j = 0; j < dim_y; j++)
			{
				cout << tab[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
private:
	// Dimensiones del tablero
	int dim_x;
	int dim_y;
	// Matriz del tablero
	int** tab;
	// El tablero puede ser una matriz de enteros donde cada valor represente una pieza
	// Por ejemplo, se puede tomar valores negativos para piezas negras y valores positivos para blancas, con 0 como casilla en blanco
};