#include "SystemManag.h"
#include "Machine.h"
#include <iostream>

void SystemManag::SetMode(std::string mode)
{
	this->mode = mode;
}

void SystemManag::SetSadMod(bool sadmod)
{
	this->sadMod = sadmod;
}

void SystemManag::GetSadMod()
{
	if (this->sadMod)
		std::cout << "������ �������\n";
	else
		std::cout << "������ ��������\n";
}

double SystemManag::GetTempe()
{
	return sensorTempe.GetTempe();
}

double SystemManag::GetAmper()
{
	return sensorTempe.GetAmper();
}

double SystemManag::SensorTempe::GetTempe()
{
	return this->tempe;
}

double SystemManag::SensorTempe::GetAmper()
{
	return this->amper;
}
