#include "Engine.h"
#include <iostream>

void Engine::SetPetrol(int petrol)
{
	this->petrol = petrol;

}

void Engine::SetPower(double power)
{
	this->power = power;
}

void Engine::GetPetrol()
{
	std::cout << "���������� �������: " << petrol << std::endl;
}

void Engine::GetPower()
{
	std::cout << "������������� �������� ���������: " << power << std::endl;
}

void Engine::Print()
{
	void GetPetrol();
	void GetPower();
}
