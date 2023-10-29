#pragma once
#include <iostream>
#include "Engine.h"
#include "SystemManag.h"

class Machine
{
private:
	bool start;
	std::string stuff;
	std::string form;
	double length;
	double width;
	Engine engine;
	SystemManag systemmanag;
public:
	Machine()
	{
		
		do {
			printf("Выберите состояния станка \n1.Включён  или 2.Выключен\n");
			std::cin >> this->start;
		} while (this->start != 1 && this->start != 2);
		while (getchar() != '\n');
		if (this->start == 2)
			Machine b(false,"","",0,0);
		else {
			printf("Ввведите материал:\n ");
			std::cin >> this->form;
			printf("Ввведите форму заготовки:\n");
			std::cin >> this->stuff;
			printf("Введите размеры заготовки \n Длину :");
			std::cin >> this->length;
			printf("\nВведите Ширину: ");
			std::cin >> this->width;

		}

	}
	Machine(bool start, std::string stuff, std::string form, double length, double width) {
		 this->start = start;
		 this->stuff = stuff;
		 this->form = form;
		 this->length = length;
		 this->width = width;
		 engine= Engine(50,90);
		 systemmanag = SystemManag("scan", true);


	}
	
	~Machine() {
		
	}
	void Print();
	void  SetStart(bool start);
	void SetStuff(std::string stuff);
	void SetForm(std::string form);
	void SetLength(double length);
	void SetWidth(double width);
	void GetStart();
	double square();
	void info();
	void launch();

};

