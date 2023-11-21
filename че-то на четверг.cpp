#include <iostream>

using std::cout;
using std::cin; 

class Circle {
private:
	int x, y, R;
	std::string colour;
public:
	void SetX(int valueX){
		x = valueX;
	}
	void SetY(int valueY) {
		y = valueY;
	}
	void SetR(int valueR) {
		R = valueR;
	}
	int GetX(){
		return x;
	}
	int GetY() {
		return y;
	}
	int GetR() {
		return R;
	}
};

int main()
{
	
}
