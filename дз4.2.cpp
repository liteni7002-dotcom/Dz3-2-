#include <iostream>
int main() {
	setlocale(LC_ALL, "RUS");
	std::cout << "������� ���� ������: ";
	int day;
	std::cin >> day;
	switch (day) {
	case 1:
		std::cout << "�����������"; break;
	case 2:
		std::cout << "�������"; break;
	case 3:
		std::cout << "�����"; break;
	case 4:
		std::cout << "�������"; break;
	case 5:
		std::cout << "�������"; break;
	case 6:
		std::cout << "�������"; break;
	case 7:
		std::cout << "�����������"; break;
	default:
		std::cout << "������"; break;
	}
}