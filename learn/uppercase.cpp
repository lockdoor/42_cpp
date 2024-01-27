#include <iostream>
#include <iomanip>

int main(void)
{
	std::cout << std::right  
						<< std::setw(10)<< std::hex << std::uppercase << std::showbase << 31 << std::endl
						<< 1e-10 << ":" << 31 << std::endl;
	return (0);
}
