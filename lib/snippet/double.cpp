#include <cstdio>
#include <iostream>

int main() {
    double d;
    std::cin >> d;
    const double pi = 3.141592653589793;

    double radius = (d / 2);
    double area = pi * radius * radius;

    // cout では制度が不十分なので printf を使う
    printf("%f\n", area);
    return 0;
}
