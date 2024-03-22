#include <iostream>
// #include <fstream>
// #include <string>
// #include <map>
#include "BitcoinExchange.hpp"
/*
    validate
    - size == 9
    - '-' at 4,7
    - year >= 1900
    - month >= 1 && month <= 12
    - check date by month, if month == 2 check year
*/

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "The program require 1 argument is filename" << std::endl;
        return (EXIT_FAILURE);
    }
	BitcoinExchange database("data.csv");
    database.calculate(argv[1]);
    return (0);
}
