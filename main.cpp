#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	/*int magicNumber{}, userNumber{}, count{}, live = 25, choose{};
	std::cout << "Игра угадай число!\n\n";
	while (true)
	{
		std::cout << "1 - Легкий уровень, 2 - Сложный, 0 - Выход\n";
		std::cout << "Ввод: ";
		std::cin >> choose;
		if (choose == 0)
		{
			break;
		}
		else if (choose == 1)
		{
			magicNumber = rand() % 10 + 1;
			std::cout << "\nУгадайте число от 1 до 10\n";
			while (true)
			{
				std::cout << "Введите число: ";
				std::cin >> userNumber;
				count++;
				if (userNumber == magicNumber)
				{
					std::cout << "Вы угадали! Колличество попыток: " << count << "\n\n";
					count = 0;
					break;
				}
				std::cout << "Не верно\n";
			}			
		}
		else if (choose == 2)
		{
			magicNumber = rand() % 500 + 1;
			std::cout << "\nУгадайте число от 1 до 500\n";
			while (true)
			{
				std::cout << "\nЖизней: " << live << "\n";
				std::cout << "Введите число: ";
				std::cin >> userNumber;			
				if (userNumber == magicNumber)
				{
					std::cout << "Вы угадали! Колличество оставшихся жизней: " << live << "\n\n";					
					break;
				}
				std::cout << "Не верно\n";
				live--;
				if (live <= 0)
				{
					std::cout << "Игра окончена\n" << "Число было: " << magicNumber << "\n\n";
					live = 25;
					break;
				}
				std::cout << "\nЖизней: " << live << "\n";
				std::cout << "1 - Взять подсказку (стоимость 1 жизнь), 2 - Пропустить\n" << "Ввод: ";
				std::cin >> choose;
				if (choose == 1)
				{
					live--;
					if (live <= 0)
					{
						std::cout << "Игра окончена\n" << "Число было: " << magicNumber << "\n\n";
						live = 25;
						break;
					}
					if (userNumber < magicNumber)
					{
						std::cout << "Ваше число меньше числа компьютера\n";
					}
					else
					{
						std::cout << "Ваше число больше числа компьютера\n";
					}
				}
			}
		}
		else
		{
			std::cout << "Некорректный ввод\n";
		}
	}*/
	/*float ab{}, bc{}, ves{}, k{}, bak = 300;
	std::cout << "Введите расстояние от A до B(км): ";
	std::cin >> ab;
	std::cout << "Введите расстояние от B до C(км): ";
	std::cin >> bc;
	std::cout << "Введите вес(кг): ";
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
		std::cout << "Не взлетит!\n";
	}
	float maxDist = bak / k;
	if (maxDist >= ab + bc)
	{
		std::cout << "Заправка не нужна";
		return 0;
	}
	if (ab <= maxDist)
	{
		std::cout << "Мы прилетели в B\n";
		if (bc <= maxDist)
		{
			float fuelAB = ab * k;
			bak = bak - fuelAB;
			float fuelBC = bc * k;
			float result = fuelBC - bak;
			std::cout << "Нужно дозаправить: " << result << " литров\n\n";
		}
		else
		{
			std::cout << "Мы не долетим до С\n";
		}
	}
	else
	{
		std::cout << "Не долетим даже до B\n";
	}*/
	/*std::cout << "Решение полного квадратного уравнения:\n\n";
	std::cout << "ax^2 + bx + c\n\n";
	float a{}, b{}, c{}, d{}, x1{}, x2{};
	std::cout << "Введите A: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;
	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";
	d = std::pow(b, 2) - (4 * a * c);
	std::cout << "Дискриминант: " << d << "\n\n";
	if (d < 0)
	{ 
		std::cout << "Корней нет!\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Корень: " << x1 << "\n";
	}
	else if (d > 0)
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "Корень 1: " << x1 << "\n";
		std::cout << "Корень 2: " << x2 << "\n";
	}*/
	/*double number = 0;
	std::cout << "Введите число: ";
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "Привет";
	}
	else if (number < 0)
	{
		std::cout << "Пока";
	}
	else if (number == 0)
	{
		std::cout << "Печенька";
	}*/
	/*double one = 0;
	double two = 0;
	char znak;
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "\nВыберите + - * или / ";
	std::cin >> znak;
	std::cout << "\nВведите второе число: ";
	std::cin >> two;
	std::cout << "\n";
	if (znak == '+')
	{
		std::cout << "Сумма: " << one + two << "\n";
	}
	else if (znak == '-')
	{
		std::cout << "Разность: " << one - two << "\n";
	}
	else if (znak == '*')
	{
		std::cout << "Произведение: " << one * two << "\n";
	}
	else if (znak == '/')
	{
		if (two != 0)
		{
		std::cout << "Частное: " << one / two << "\n";
	    }
		else
		{
			std::cout << "Ошибка\n";
		}
	}
	else if (znak != '+' && znak != '-' && znak != '*' && znak != '/')
	{
		std::cout << "Ошибка\n";
	}*/
	return 0;
}