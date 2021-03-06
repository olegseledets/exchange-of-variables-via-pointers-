#include <iostream>

void swap(int *ptr_a, int *ptr_b) {
  *ptr_b += *ptr_a;
  *ptr_a = *ptr_b - *ptr_a; 
  *ptr_b -= *ptr_a; 
}

int main() {
  int a = 0, b = 3;
  std::cout << "Введите a: ";
  std::cin >> a;
  std::cout << "Введите b: ";
  std::cin >> b;
  swap(&a, &b);
  std::cout << "a = " << a << "\nb = " << b << std::endl;
}

/*
Что нужно сделать:
Написать функцию, принимающую два указателя на int и меняет местами содержимое данных указателей.
Пример:
int a = 10;
int b = 20;
swap(&a, &b);
std::cout << a << “ “ << b;
// 20 10

Чек-лист для проверки задачи
Функция принимает корректные типы данных, тип возвращаемого значения -- void
Функция не использует библиотек кроме <iostream>
Функция меняет значения по указателям
*/