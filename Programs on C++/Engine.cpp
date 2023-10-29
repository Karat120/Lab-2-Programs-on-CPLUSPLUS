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
	std::cout << "Количество топлива: " << petrol << std::endl;
}

void Engine::GetPower()
{
	std::cout << "Установленная мощность двигателя: " << power << std::endl;
}

void Engine::Print()
{
	void GetPetrol();
	void GetPower();
}
