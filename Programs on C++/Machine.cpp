#define _CRT_SECURE_NO_WARNINGS
#include "Machine.h"
#include <fstream>
#include <iostream>
#include <string>
void Machine::Print()
{
	std::cout << "��������� ������: " << start << std::endl;
	std::cout << "����������� ��������: " << stuff << std::endl;
	std::cout << "��������� �����: " << form << std::endl;
	std::cout << "��������� �������� �����: " << length << "\t������: " << width << std::endl;
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
			std::cout<<"������ ����������";
		}
		std::cout<<"\n�����: "<<form << "\t������"<<std::endl;
	}
}

void Machine::info() {
	std::string as;
	std::ifstream fout("myinfo.txt");
	
	if (fout.is_open()) 
	{
		while (std::getline(fout, as))
		{
			std::cout << as << std::endl;
		}
	}
	
	fout.close();
}


