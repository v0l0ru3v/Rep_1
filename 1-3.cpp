#include <iostream>
#include <cmath>
#include <locale>
#include <string>

/**
\brief Рассчитаем силу давления
\param weight Масса плиты
\param Скорость свободного падения плиты
\param square Площадь плиты
\return Рассчитаем давление
*/
double getSurface(const double mass, const double area, const int g);

/**
\brief Точка входа в программу
\return В случае успеха возвращаем 0
*/
int main()
{
    const int g = 9.8;
    std::cout << "Введите массу плиты = ";
    double mass;
    std::cin >> mass;

    std::cout << "Введите площадь плиты = ";
    double area;
    std::cin >> area;

    const double surface = getSurface(mass, area, g);
    std::cout << "\n Area =  " << surface << std::endl;
    return 0;
}


double getSurface(const double mass, const double area, const int g)
{
    return mass * g / area;
} 