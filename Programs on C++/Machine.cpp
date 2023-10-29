#define _CRT_SECURE_NO_WARNINGS
#include "Machine.h"



FILE* myinfo;
void Machine::Print()
{
	std::cout << "Состояние станка: " << start << std::endl;
	std::cout << "Загруженный материал: " << stuff << std::endl;
	std::cout << "Выбранная форма: " << form << std::endl;
	std::cout << "Параметры заданные Длина: " << length << "\tШирина: " << width << std::endl;
}

void Machine::SetStart(bool start)
{
	this->start = start;
}

void Machine::SetStuff(std::string stuff)
{
	this->stuff = stuff;
}

void Machine::SetForm(std::string form)
{
	this->form = form;
}

void Machine::SetLength(double length)
{
	this->length = length;
}

void Machine::SetWidth(double width)
{
	this->width = width;
}

void Machine::GetStart()
{
	std::cout << start << std::endl;
}



double Machine::square()
{
	double square;
	square = length * width;
	return square;
}
void Machine::launch()
{
	
	SystemManag systemmanag;
	
	if (this->start) {
		if ( systemmanag.GetAmper() == 220) {
			for (int i = 0; i <= 100; i++)
			{
				system("cls");
				std::cout<<i;
			}
		}
		else {
			std::cout<<"Ошибка напряжения";
		}
		std::cout<<"\nФорма: "<<form << "\tготова"<<std::endl;
	}
}
void Machine::info() {
	char str[300];
	myinfo = fopen("info.txt", "r");
	while (fgets(str, 250, myinfo) != NULL)
		printf("%s", str);
	fclose(myinfo);
}


