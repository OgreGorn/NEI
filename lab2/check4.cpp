#include <iostream>

void my_func() {
    std::cout << "Вызов функции через оператор ()" << std::endl;
}

int main() {
    int arr[] = {10, 20, 30};
    int val = arr[1];
    std::cout << "Элемент массива arr: " << val << std::endl;

    my_func();
    double pi = 3.14;
    int int_pi = (int)pi;
    
    int calc = (5 + 3) * 2;
    std::cout << "Результат calc: " << calc << std::endl;

    return 0;
}