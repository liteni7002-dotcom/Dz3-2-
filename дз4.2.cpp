#include <iostream>
int main() {
	setlocale(LC_ALL, "RUS");
	std::cout << "Введите день недели: ";
	int day;
	std::cin >> day;
	switch (day) {
	case 1:
		std::cout << "Понедельник"; break;
	case 2:
		std::cout << "вторник"; break;
	case 3:
		std::cout << "среда"; break;
	case 4:
		std::cout << "четверг"; break;
	case 5:
		std::cout << "пятница"; break;
	case 6:
		std::cout << "суббота"; break;
	case 7:
		std::cout << "воскресенье"; break;
	default:
		std::cout << "ошибка"; break;
	}
}