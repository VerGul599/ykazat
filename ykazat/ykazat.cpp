#include <iostream> 
#include <functional> 
#include <Windows.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b) 
{
    return a - b;
}

double multiply(double a, double b) 
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        std::cout << "Ошибка: деление на ноль";
        return 0; 
    }
}
double Root(double a)
{
    if (a < 0)
    {
        std::cout << "Ошибка: невозможно извлечь корень из отрицательного числа" << "\n";
        return 0;
    }
}

double MakeDecision(double a, double b, char operation)
{
    if (operation == '+') 
    {
        return add(a, b);
    }
    else if (operation == '-')
    {
        return subtract(a, b);
    }
    else if (operation == '*')
    {
        return multiply(a, b);
    }
    else if (operation == '/')
    {
        return divide(a, b);
    }
    else if (operation == 's')
    {
        return Root(a);
    }
    else
    {
        std::cout << "Неверная операция" << "\n";
        return 0;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double Num_1, Num_2, result;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> Num_1;

    std::cout << "Введите второе число: ";
    std::cin >> Num_2;

    std::cout << "Выберите операцию (+, -, *, /, %, sqrt): ";
    std::cin >> operation;

    result = MakeDecision(Num_1, Num_2, operation);

    std::cout << "Результат: " << result << "\n";

    return 0;
}
