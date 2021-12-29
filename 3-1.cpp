#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * \brief Функциия для расчета y.
 * \param x Параметр x.
 * \return Возвращает значение y.
 */
double Calculate(const double x);

/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */

int main()
{
  setlocale(LC_ALL, "Russian");
  const auto minvalue = 2.0;
	const auto maxvalue = 4.0;
	const auto step = 0.2;

  auto x = minvalue;

  while ((x <= maxvalue) or (abs(x - maxvalue) < step))
  { 
    if (Calculate(x))
    {
      const auto y = Calculate(x);
      cout<<"При x="<<x<<"; y ="<<y<<endl;
    }
    else 
    {
      cout<<"При x="<<x<<"-Нет решения"<< endl;
    }
    x += step;
  }
  return 0;
}
double Calculate(const double x) {
	return 3 * x - 4 * log(x) - 5;
}