#pragma once

class Engine
{
private:
	int petrol;
	double power;
public:
	Engine() 
	{
		petrol = 0;
		power = 0;
	}
	Engine(int petrol, double power) 
	{
		this->petrol = petrol;
		this->power = power;
	}
	void SetPetrol(int petrol);
	void SetPower(double power);
	void GetPetrol();
	void GetPower();
	void Print();
};

