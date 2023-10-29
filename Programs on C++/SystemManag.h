#pragma once
#include <iostream>

class SystemManag
{
private:
	std::string mode;
	bool sadMod; //сканер поверхности


	class LaserScan {
	private:
		double square;
		bool defect; //сканер поверхности
	public:
		LaserScan() {
			this->square = 0;
			this->defect = false;
		}
		LaserScan(double square, bool defect) {
			this->square = square;
			this->defect = defect;
		}
		
	};

	class  SensorTempe{
	private:
		double tempe;
		double amper;
		
	public:
		SensorTempe() 
		{
			tempe = 0;
			amper = 0;
		}
		SensorTempe(double tempe, double amper)
		{
			this->tempe = tempe;
			this->amper = amper;
		}
		double GetTempe();
		double GetAmper();
	};
	LaserScan laserScan;
	SensorTempe sensorTempe;
public:

	SystemManag() 
	{
		sadMod = false;
		sensorTempe=SensorTempe(80,220);
		laserScan= LaserScan(0, false);
	}
	SystemManag(std::string mode, bool sadMod) 
	{
		this->mode = mode;
		this->sadMod = sadMod;
		if (this->sadMod) 
		{
			laserScan= LaserScan();
		}
		
	}

	void SetMode(std::string mode);
	void SetSadMod(bool sadmod);
	void GetSadMod();
	double GetTempe();
	double GetAmper();
	
};



