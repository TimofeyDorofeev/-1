# задание 3

#include <iostream>

int main() {
    double x;

    std::cout << "Введите значение x: ";
    if (!(std::cin >> x)) {
        std::cerr << "Ошибка ввода!\n";
        return 1;
    }

    // Упрощённое выражение: 0.9 * x - 11.7
    double result = 0.9 * x - 11.7;

    std::cout << "Значение выражения: " << result << "\n";
    return 0;
}


# задание 4

#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    char s;
    std::cin >> a >> b >> c >> s;

    if (s == 'o') {
        if (a == 0 && b == 0) {
            std::cout << (c == 0 ? "x — любое действительное число" : "Корней нет") << "\n";
        }
        else if (a == 0) {
            std::cout << "Один корень: x = " << -c / b << "\n";
        }
        else {
            double D = b * b - 4 * a * c;
            if (D < 0) {
                std::cout << "Действительных корней нет\n";
            }
            else if (D == 0) {
                std::cout << "Один корень: x = " << -b / (2 * a) << "\n";
            }
            else {
                double x1 = (-b + std::sqrt(D)) / (2 * a);
                double x2 = (-b - std::sqrt(D)) / (2 * a);
                std::cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << "\n";
            }
        }
    }

    else if (s == 'j') {
        int n;
        std::cin >> n;
        std::cout << "Число " << n << (n % 2 == 0 ? " делится" : " не делится")
                  << " на 2 без остатка\n";
    }
}
