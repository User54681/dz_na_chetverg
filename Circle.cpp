#include "Circle.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;

Circle::Circle(double valueX, double valueY, double valueR, std::string colour) {
	x = valueX;
	y = valueY;
	R = valueR;
}
Circle::Circle(double valueR) {
	x = 0;
	y = 0;
	R = valueR;
	colour = "Черный";
}
void Circle::SetX(double valueX) {
	x = valueX;
}
void Circle::SetY(double valueY) {
	y = valueY;
}
void Circle::SetR(double valueR) {
	R = valueR;
}
void Circle::SetColour(std::string valueColour) {
	colour = valueColour;
}
double Circle::GetX() {
	return x;
}
double Circle::GetY() {
	return y;
}
double Circle::GetR() {
	return R;
}
std::string Circle::GetColour() {
	return colour;
}
void Circle::LengthAndArea() {
	double Length, Area;
	double pi = 3.1415926535;
	Length = 2 * pi * R;
	Area = pi * R * R;
	cout << "Длина окружности: " << Length << "\tПлощадь круга: " << Area << "\n";
}

void Circle::ChangeColour() {
	std::string colours[7] = { "Белый", "Черный", "Красный", "Синий", "Зеленый", "Фиолетовый", "Желтый" };
	int index = rand() % 7;

	colour = colours[index];
	cout << "Цвет после изменения: " << colour << "\n";
}

void Circle::printToFile() {
	std::ofstream file("file.txt");
	if (file.is_open()) {
		file << "X: " << x << "\n";
		file << "Y: " << y << "\n";
		file << "Радиус: " << R << "\n";
		file << "Цвет окружности: " << colour << "\n";
	}
	file.close();

	cout << "Запись в файл была завершена";
}