#include <iostream>
#include <cmath>

int toFixed(float f)
{
    float   a = f * std::pow(2, 8);
    int b = int(std::round(a));
    if (a < 0){
        b = std::abs(b);
        b = ~b;
        b += 1;
    }
    return b;
}

float toFloat(int fix)
{
    int c = std::abs(fix);
    int sign = 1;
    if (fix < 0){
        sign = -1;
        c = fix - 1;
        c = ~c;
    }
    float f = (1.0 * c) / (std::pow(2, 8));
    return (f * sign);
}

int main() {
    float number1 = 42.42f;
    float number2 = -1234.4321f;
    float number3 = 99998.1989;

    std::cout << toFixed(number1) << std::endl;
    std::cout << toFloat(toFixed(number1)) << std::endl;
    std::cout << toFixed(number2) << std::endl;
    std::cout << toFloat(toFixed(number2)) << std::endl;
    std::cout << toFixed(number3) << std::endl;
    std::cout << toFloat(toFixed(number3)) << std::endl;

    return 0;
}
