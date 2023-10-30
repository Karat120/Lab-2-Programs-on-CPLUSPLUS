#include <iostream>
#include "Machine.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	/*Machine *b = new Machine(true,"iron","cub",23,12);
	b->info();
	b->Print();
	delete b;*/


	//Динамический массив объектов

	Machine* array = new Machine[5];

	array[0] = Machine(true, "tree", "circle", 1, 2);
	array[1] = Machine(false, "iron", "cub", 11, 22);
	array[2] = Machine(true, "copper", "rectangle", 10, 22);

	
	array[0].Print();
	array[1].Print();
	array[2].Print();

	delete[]array;
}

																																												