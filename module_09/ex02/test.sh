#!/bin/bash
# ./PmergeMe 1
# echo
# ./PmergeMe 1 2
# echo
# ./PmergeMe 2 1
# echo
# ./PmergeMe 1 3 5
# echo
# ./PmergeMe 1 5 3
# echo
# ./PmergeMe 5 1 3
# echo
# ./PmergeMe 5 3 1
# echo
# ./PmergeMe 3 1 5 4 7
# echo
# ./PmergeMe 3 5 1 4 2
# echo
# ./PmergeMe 1 5 3 7 8 10 11
# echo

# ./PmergeMe $(jot -r -s ' ' 3000 1 10000)
./PmergeMe $(jot -r -s ' ' 10 1 100)
# ./PmergeMe 82 84 46 50 76 37 63 29 73 7

# ./PmergeMe ""