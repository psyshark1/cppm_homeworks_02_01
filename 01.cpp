#include <iostream>
#include <string>

enum class months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main(int argc, char** argv)
{
	std::system("chcp 1251");

	std::string out;
	short month_number;

	while (true)
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> month_number;

		if (month_number == 0)
		{
			std::cout << "До свидания" << '\n';
			break;
		}
		else if (month_number < 0 || month_number > 12)
		{
			std::cout << "Неправильный номер!" << '\n';
			continue;
		}

		switch (month_number)
		{
		case static_cast<int>(months::January):
			std::cout << "Январь" << '\n';
			break;
		case static_cast<int>(months::February):
			std::cout << "Февраль" << '\n';
			break;
		case static_cast<int>(months::March):
			std::cout << "Март" << '\n';
			break;
		case static_cast<int>(months::April):
			std::cout << "Апрель" << '\n';
			break;
		case static_cast<int>(months::May):
			std::cout << "Май" << '\n';
			break;
		case static_cast<int>(months::June):
			std::cout << "Июнь" << '\n';
			break;
		case static_cast<int>(months::July):
			std::cout << "Июль" << '\n';
			break;
		case static_cast<int>(months::August):
			std::cout << "Август" << '\n';
			break;
		case static_cast<int>(months::September):
			std::cout << "Сентябрь" << '\n';
			break;
		case static_cast<int>(months::October):
			std::cout << "Октябрь" << '\n';
			break;
		case static_cast<int>(months::November):
			std::cout << "Ноябрь" << '\n';
			break;
		case static_cast<int>(months::December):
			std::cout << "Декабрь" << '\n';
			break;
		}
	}
	std::system("pause");
	return 0;
}