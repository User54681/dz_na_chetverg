#include <iostream>
#include <time.h>
#include <fstream>

using std::cout;
using std::cin; 

class Circle {
private:
	double x, y, R;
	std::string colour;
public:
	Circle (double valueX, double valueY, double valueR, std::string colour) {
		x = valueX;
		y = valueY;
		R = valueR;
	}
	Circle(double valueR) {
		x = 0;
		y = 0;
		R = valueR;
		colour = "Black";
	}
	void SetX(double valueX){
		x = valueX;
	}
	void SetY(double valueY) {
		y = valueY;
	}
	void SetR(double valueR) {
		R = valueR;
	}
	void SetColour(std::string valueColour) {
		colour = valueColour;
	}
	double GetX(){
		return x;
	}
	double GetY() {
		return y;
	}
	double GetR() {
		return R;
	}
	std::string GetColour(){
		return colour;
	}
};

 void LengthAndArea(double R) {
	double Length, Area;
	double pi = 3.1415926535;
	Length = 2 * pi * R;
	Area = pi * R * R;
	cout << "" << Length << "" << Area << "\n";
}

 void ChangeColour(Circle& c) {
	 std::string colours[7] = { "Белый", "Черный", "Красный", "Синий", "Зеленый", "Фиолетовый", "Желтый" };
	 int index = rand() % 7;

	 c.SetColour(colours[index]);
 }

 void printToFile(Circle& c, std::string FileName) {
	 std::ofstream file(FileName);
	 if(file.is_open()){
		 file << "X: " << c.GetX() << "\n";
		 file << "Y: " << c.GetY() << "\n";
		 file << "Радиус: " << c.GetR() << "\n";
		 file << "Цвет окружности: " << c.GetColour() << "\n";
	 }
	 file.close();

	 cout << "Запись в файл была завершена";
 }

 int main()
 {
	 setlocale(LC_ALL, "Rus");
	 srand(time(NULL));
	 Circle c1(5);
	 ChangeColour(c1);
	 printToFile(c1, "file.txt");
}
