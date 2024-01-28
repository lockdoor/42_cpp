#include <iostream>
#include <string>
#include <sstream>

/*
int main(void)
{
	std::size_t index;
	std::string input;
	std::getline(std::cin, input);
	std::istringstream(input) >> index;
	std::cout << index << std::endl;
	return (0);
}
*/

/*
int main(void)
{
	std::size_t index;
	std::string input;
	while (std::getline(std::cin, input)){
		std::istringstream(input) >> index;
		if (!std::cin.fail()) {
			std::cout << "You entered: " << index << std::endl;
		} else {
			std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}
*/


/* use this for search index of contact in module00 ex01 */
int isIndex(const std::string &str)
{
	for (std::size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i])) return (-1);
	}
	return (std::atoi(str.data()));
}

int main(void)
{
	std::string input;
	if (std::getline(std::cin, input)){
		std::istringstream istream(input);
		std::string str;
		while (istream >> str)
		{
			int	index = isIndex(str);
			if (index >= 1 && index <= 8)
				std::cout << "You entered: " << index << std::endl;
			else
				std::cout << str << ": can not find index" << std::endl;
		}
	}
	return (0);
}