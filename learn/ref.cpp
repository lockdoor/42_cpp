#include <iostream>

void	setValue(int &x)
{
	std::cout << x << std::endl; // x = 0;
	x = 42;
}

int	main(void)
{
	int	x = 0;
	setValue(x);
	std::cout << x << std::endl; // x = 42;
	return (0);
}