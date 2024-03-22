#include <vector>
#include <iostream>

/*
int main(void)
{
	std::vector<int> v1;

	// std::cout << "Capacity: " << v.capacity() << "addr: " << *v.begin() << std::endl; // 0

	// vector only has push_back, pop_back
	for (int i = 0; i < 8; i++) {
		v1.push_back(i);
		for (int &el: v1) {
			std::cout << "Capacity: " << v1.capacity() << ", " << &el << ": " << el << std::endl;
		}
		std::cout << std::endl;
	}

	std::vector<int>::iterator it = v1.begin();
	std::cout << *it << std::endl;

    return (0);
}
*/

#include <set>
// #include "Span.hpp"

void printSet(const std::set<int> &s)
{
	std::set<int>::iterator it = s.begin();
	std::set<int>::iterator ite = s.end();
	for (; it != ite; it++) {
		std::cout << *it << ",";
	}
	std::cout << std::endl;
}

int main(void)
{
	std::set<int> s;

	try {
		s.insert(6);
		s.insert(1);
		s.insert(2);
		s.insert(3);
		s.insert(3);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	printSet(s);
}