#include <iostream>
#include <math.h>
class Tablero
{
public:
	//Declaración de la matriz del tablero
	Tablero(int x, int y) : dim_x (x), dim_y(y) 
	{
		tab = new int*[dim_x];
		for (int i = 0; i < dim_x; i++)
		{
			*(tab + i) = new int[dim_y];
		}
	}
private:
	int dim_x;
	int dim_y;
	int** tab;
};