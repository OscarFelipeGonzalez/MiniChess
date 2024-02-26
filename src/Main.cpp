#include <stdio.h>
#include "..\lib\tablero.h"
#include <fstream>

using namespace std;

int main()
{
	ifstream archivo;
	archivo.open("..\data\tablero1.txt");
	Tablero tab(&archivo);
	return 0;
}

