#include <iostream>

// Создать небольшое приложение для перевода сантиметров  дюймы. 
// Приложение запрашивает у пользователя сантиметры и выводит размер в дюймах.

// константа на этапе компиляции
constexpr double CM_PER_INCH = 2.54;

int main() {
  std::cout << "Конвертация сантиметров -> дюймы\n";
  std::cout << "Введите кол-во сантиметров: ";

  double centimeters;

  // стандартный ввод
  // std::cin >> centimeters;

  // ввод с проверкой валидности
  if (!(std::cin >> centimeters)) {
    std::cerr << "Ошибка; Введите число!\n";
    return 1;
  }

  std::cout << centimeters << " см. в дюймах: " << centimeters / CM_PER_INCH << '\n';
  // printf("%f см. в дюймах: %f\n", centimeters, inches);  // альтернативный подход с printf
  
  return 0;
}
