#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	/*float ab{}, bc{}, ves{}, k{}, bak = 300;
	std::cout << "������� ���������� �� A �� B(��): ";
	std::cin >> ab;
	std::cout << "������� ���������� �� B �� C(��): ";
	std::cin >> bc;
	std::cout << "������� ���(��): ";
	std::cin >> ves;
	if (ves <= 500 && ves >= 0)
	{
		k = 1;
	}
	else if (ves > 500 && ves <= 1000)
	{
		k = 4;
	}
	else if (ves > 1000 && ves <= 1500)
	{
		k = 7;
	}
	else if (ves > 1500 && ves <= 2000)
	{
		k = 9;
	}
	else if (ves > 2000)
	{
		std::cout << "�� �������!\n";
	}
	float maxDist = bak / k;
	if (maxDist >= ab + bc)
	{
		std::cout << "�������� �� �����";
		return 0;
	}
	if (ab <= maxDist)
	{
		std::cout << "�� ��������� � B\n";
		if (bc <= maxDist)
		{
			float fuelAB = ab * k;
			bak = bak - fuelAB;
			float fuelBC = bc * k;
			float result = fuelBC - bak;
			std::cout << "����� �����������: " << result << " ������\n\n";
		}
		else
		{
			std::cout << "�� �� ������� �� �\n";
		}
	}
	else
	{
		std::cout << "�� ������� ���� �� B\n";
	}*/
	/*std::cout << "������� ������� ����������� ���������:\n\n";
	std::cout << "ax^2 + bx + c\n\n";
	float a{}, b{}, c{}, d{}, x1{}, x2{};
	std::cout << "������� A: ";
	std::cin >> a;
	std::cout << "������� B: ";
	std::cin >> b;
	std::cout << "������� C: ";
	std::cin >> c;
	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";
	d = std::pow(b, 2) - (4 * a * c);
	std::cout << "������������: " << d << "\n\n";
	if (d < 0)
	{ 
		std::cout << "������ ���!\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "������: " << x1 << "\n";
	}
	else if (d > 0)
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "������ 1: " << x1 << "\n";
		std::cout << "������ 2: " << x2 << "\n";
	}*/
	/*double number = 0;
	std::cout << "������� �����: ";
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "������";
	}
	else if (number < 0)
	{
		std::cout << "����";
	}
	else if (number == 0)
	{
		std::cout << "��������";
	}*/
	/*double one = 0;
	double two = 0;
	char znak;
	std::cout << "������� ������ �����: ";
	std::cin >> one;
	std::cout << "\n�������� + - * ��� / ";
	std::cin >> znak;
	std::cout << "\n������� ������ �����: ";
	std::cin >> two;
	std::cout << "\n";
	if (znak == '+')
	{
		std::cout << "�����: " << one + two << "\n";
	}
	else if (znak == '-')
	{
		std::cout << "��������: " << one - two << "\n";
	}
	else if (znak == '*')
	{
		std::cout << "������������: " << one * two << "\n";
	}
	else if (znak == '/')
	{
		if (two != 0)
		{
		std::cout << "�������: " << one / two << "\n";
	    }
		else
		{
			std::cout << "������\n";
		}
	}
	else if (znak != '+' && znak != '-' && znak != '*' && znak != '/')
	{
		std::cout << "������\n";
	}*/
	return 0;
}