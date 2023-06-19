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
		std::cout << "������� ����� ������: ";
		std::cin >> month_number;

		if (month_number == 0)
		{
			std::cout << "�� ��������";
			break;
		}
		else if (month_number < 0 || month_number > 12)
		{
			std::cout << "������������ �����!" << '\n';
			continue;
		}

		switch (month_number)
		{
		case static_cast<int>(months::January):
			std::cout << "������" << '\n';
			break;
		case static_cast<int>(months::February):
			std::cout << "�������" << '\n';
			break;
		case static_cast<int>(months::March):
			std::cout << "����" << '\n';
			break;
		case static_cast<int>(months::April):
			std::cout << "������" << '\n';
			break;
		case static_cast<int>(months::May):
			std::cout << "���" << '\n';
			break;
		case static_cast<int>(months::June):
			std::cout << "����" << '\n';
			break;
		case static_cast<int>(months::July):
			std::cout << "����" << '\n';
			break;
		case static_cast<int>(months::August):
			std::cout << "������" << '\n';
			break;
		case static_cast<int>(months::September):
			std::cout << "��������" << '\n';
			break;
		case static_cast<int>(months::October):
			std::cout << "�������" << '\n';
			break;
		case static_cast<int>(months::November):
			std::cout << "������" << '\n';
			break;
		case static_cast<int>(months::December):
			std::cout << "�������" << '\n';
			break;
		}
	}
	std::system("pause");
	return 0;
}