#include <iostream>

int main() {
    int a, x, y, z;
    std::cin >> x >> y >> z;
    a = -x + y * (z - 1);
    std::cout << a;
    return 0;
}