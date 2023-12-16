#include <iostream>

int main()
{
    /*
    setlocale(LC_ALL, "Russian");
    
    float width;
    float height;

    std::cout << "Введите ширину: ";
    std::cin >> width;
    std::cout << "Введите высоту: ";
    std::cin >> height;

    float area = width * height;
    std::cout << "Площадь прямоугольника = " << area << "\n";

    std::cout << "Периметр прямоугольника = " << 2 * (width + height) << "\n";

    std::cout << "-------------------------------------------------\n";
    std::cout << "| Фамилия\t" << "| Группа\t" << "| Оценка\t|" << "\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| Иванов\t" << "| CP-222\t| " << 11 << "\t\t|\n";
    std::cout << "| Петров\t| PV-111\t| 10\t\t|\n";
    std::cout << "| Сидоров\t";
    std::cout << "| SBU-321\t";
    std::cout << "| 10\t\t" << "\n";
    std::cout << "-------------------------------------------------\n";
    */

    /*
    int a{ 10 };
    int b{ 3 };

    std::cout << a << " + " << b << " = " << a + b << "\n";
    std::cout << a << " - " << b << " = " << a - b << "\n";
    std::cout << a << " * " << b << " = " << a * b << "\n";
    std::cout << a << " / " << b << " = " << a / b << "\n";
    std::cout << a << " % " << b << " = " << a % b << "\n";

    int number;
    std::cout << "input number: ";
    std::cin >> number;

    std::cout << std::boolalpha << (number % 2 == 0) << "\n";

    int summa{};

    summa = summa + number % 10;
    number = number / 10;

    summa = summa + number % 10;
    number = number / 10;

    summa = summa + number % 10;
    number = number / 10;

    summa = summa + number % 10;
    number = number / 10;

    std::cout << "Summa digits of number = " << summa << "\n";
    */

    //int a{ 5 };
    //int b{ 10 };

    ////std::cout << (++a) * b << "\n";
    ////std::cout << a << "\n";

    //b = ++a;
    //std::cout << b << "\n";

    int begin{ 8 };
    int end{ 20 };

    int beginLunch{ 12 };
    int endLunch{ 14 };

    int time;
    std::cout << "Input time: ";
    std::cin >> time;

    bool isEnter;
    //isEnter = time >= begin && time < end;

    isEnter = time >= begin && time < beginLunch
           || time >= endLunch && time < end;

    isEnter = time >= begin && time < end
         && !(time >= beginLunch && time < endLunch);

    isEnter = time >= begin && time < end
        && (time < beginLunch || time >= endLunch);

    std::cout << std::boolalpha << isEnter << "\n";
}
