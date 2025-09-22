#include <iostream>

using namespace std;

int main() {
	double x, y, z;
	cout << "enter x";
	cin >> x;
	cout << "enter y";
	cin >> y;
	cout << "enter z";
	cin >> z;
	if (x + y + z < 1)
	{
		if ((x <= y) && (x <= z)) { x = (y + z) / 2; }
		else if ((y <= x) && (y <= z)) { y = (x + z) / 2; }
		else { z = (x + y) / 2; }
	}
	else
	{
		if (x <= y) { x = (y + z) / 2; }
		else { y = (x + z) / 2; }
	}
	cout << "x=" << x << " y=" << y << " z=" << z << endl;

}