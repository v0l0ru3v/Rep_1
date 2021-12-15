#include <iostream>
#include <locale>
#include <string>

using namespace std;

/**
* \brief замена переменных разными способами
*/

enum class MethodeChoice
{	first = 1,second = 2 };

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main() { 
  setlocale(LC_ALL, "Russian");
    double a, b, c;
    std::cout << "Введите переменные a и b: ";
    std::cin >> a >> b;
    
    std::cout << "Выберите способ замены значений(1-с использованием другой переменной,2-без использования)";
    int methode;
    std::cin >> methode;
    const auto choice = static_cast<MethodeChoice>(methode);

    switch(choice)
    {
    case MethodeChoice::first:
    {
    std::cout << "До замены: a = " << a << ", b = " << b << std::endl;
    c = a;
    a = b;
    b = c;
    std::cout << "После замены: a = " << a << ", b = " << b << std::endl;
    break;
        
    }
    case MethodeChoice::second:
    {
    std::cout << "До замены: a = " << a << ", b = " << b << std::endl;
    a = a + b;
    b = b - a;
    b = -b;
    a = a - b;
    std::cout << "После замены: a = " << a << ", b = " << b << std::endl;
    break;
    }
    
    }
    return 0;
} 