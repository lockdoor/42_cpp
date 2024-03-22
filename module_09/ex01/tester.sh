#!/bin/bash

function test () {
    echo  test "\"$2\""
    echo -n expect: $1, result :' '
    ./RPN "$2" 
    echo
}

test Error "1 + 2"
test Error "+ 1 2"
test Error "1 2 + +"
test 42 "7 7 * 7 -"
test 42 "8 9 * 9 - 9 - 9 - 4 - 1 +"
test 0 "1 2 * 2 / 2 * 2 4 - +"
test Error "( 1 + 1 )"
