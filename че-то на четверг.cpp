#include <iostream>
#include <time.h>
#include <fstream>
#include "Circle.h"

 int main()
 {
	 setlocale(LC_ALL, "Rus");
	 srand(time(NULL));
	 int x, y, R;
	 std::string colour;
	 Circle c1(5);
	 x = c1.GetX();
	 y = c1.GetY();
	 R = c1.GetR();
	 colour = c1.GetColour();
	 std::cout << "Координата по х: " << x << "; Координата по у: " << y << "; Радиус окружности: " << R << "; Цвет окружности: " << colour << "\n";
	 c1.LengthAndArea();
	 c1.ChangeColour();
	 c1.printToFile();
}
