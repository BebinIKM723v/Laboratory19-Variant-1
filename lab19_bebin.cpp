#include <iostream>
#include <algorithm>

template <typename T>
void sortThree(T& a, T& b, T& c) {
    if (a > b) std::swap(a, b);
    if (b > c) std::swap(b, c);
    if (a > b) std::swap(a, b);
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int x = 3, y = 1, z = 2;
    sortThree(x, y, z);
    std::cout << "Вiдсортованi int: " << x << " " << y << " " << z << std::endl;

    double a = 3.5, b = 1.2, c = 2.8;
    sortThree(a, b, c);
    std::cout << "Вiдсортованi double: " << a << " " << b << " " << c << std::endl;

    char ch1 = 'c', ch2 = 'a', ch3 = 'b';
    sortThree(ch1, ch2, ch3);
    std::cout << "Вiдсортованi char: " << ch1 << " " << ch2 << " " << ch3 << std::endl;

    return 0;
}
