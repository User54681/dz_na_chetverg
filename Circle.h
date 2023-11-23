#pragma once
#ifndef CIRCLE_C1
#define CIRCLE_C1
#include <iostream>

class Circle {
private:
	double x, y, R;
	std::string colour;
public:
	Circle(double valueX, double valueY, double valueR, std::string colour);
	Circle(double valueR);
	void SetX(double valueX);
	void SetY(double valueY);
	void SetR(double valueR);
	void SetColour(std::string valueColour);
	double GetX();
	double GetY();
	double GetR();
	std::string GetColour();
	void LengthAndArea();
	void ChangeColour();
	void printToFile();
};

#endif