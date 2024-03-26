#include <ctime>
#include <iostream>
#include <unistd.h>

int main(void)
{
    std::clock_t  start = std::clock();
    std::cout << CLOCKS_PER_SEC << std::endl;
    // std::cout << 1000.0 * start / CLOCKS_PER_SEC << std::endl;
    // usleep(1000000);
    sleep (1);
    std::clock_t end = std::clock();
    std::cout << 1000.0 * (end - start) / CLOCKS_PER_SEC << std::endl;
    return (0);
}