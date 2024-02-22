#include <sstream>
#include <iostream>

int main() {
  std::istringstream iss("42.0f");
  double d;
  iss >> d;
  std::cout << d << std::endl;
  return 0;
}
