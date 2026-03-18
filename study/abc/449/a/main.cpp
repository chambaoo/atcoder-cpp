#include <cstdio>
#include <iostream>

int main() {
    double d;
    std::cin >> d;
    const double pi = 3.141592653589793;

    double radius = (d / 2);
    double area = pi * radius * radius;

    printf("%f\n", area);
    return 0;
}
