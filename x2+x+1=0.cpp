#include <iostream>
#include <cmath>

int main(){
	float a, b, c; 
	std::cout << "enter coefficients";
	std::cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0){
			std::cout << "There is no real roots";
		}
		else {
			float x = c / b;
			std::cout << "x="<<x;
		}
	}
	else {
		float d = (pow(b,2) - 4 * a * c);
		if (d < 0) {
			std::cout << "There is no real roots";
		}
		else {
			float x1 = (-b + pow(d, 0.5)) / (2 * a);
			float x2 = (-b - pow(d, 0.5)) / (2 * a);
			if (x1 == x2) {
				std::cout << "x=" << x1;
			}
			else {
				std::cout << "x1=" << x1<<"\n";
				std::cout << "x2=" << x2;
			}
		}
	}

}