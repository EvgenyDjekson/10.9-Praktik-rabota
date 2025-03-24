// 10.9 Практическая работа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
int main()
{
    float a, b, c;
    std::cout << "a, b, c:";
    std::cin >> a >> b >> c;
    
    float discriminant = (b * b) - 4 * a * c;

    if (discriminant < 0)
    {
        std::cout << "There is no solution!" << std::endl;
    }
    else if (discriminant  > 0) {

       float x1 = (-b + std::sqrt(discriminant)) / (2 * a);
       float x2 = (-b - std::sqrt(discriminant)) / (2 * a);
       std::cout << "Root 1, 2: " << x1 << ", " << x1 << std::endl;
    }
        else if (discriminant == 0)
        {
            float x = b + std::sqrt(discriminant * discriminant) / (2 * a);
            std::cout << "Root: " << discriminant << std::endl;
        }
        else
        {
            std::cout << "Complex scenario is not supported!" << std::endl;
        }
    
    return 0;
}