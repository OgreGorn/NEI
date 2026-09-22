#include <iostream>

int main() {
    int x = 1;
    while (x < 10) {
        x *= 2;
    }

    int y = 1;
    do {
        y *= 2;
    } while (y < 10);

    for (int i = 0; i < 3; i++) {
        int temp = i;
    }

    int arr[] = {1, 2, 3};
    for (int n : arr) {
        int temp = n;
    }

    std::cout << "All 4 loops compiled successfully" << std::endl;
    return 0;
}