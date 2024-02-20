#! /bin/bash --debug

test(){
    echo ./convert $1
    ./convert $1
    echo "=========================="
}
test "1"
test "nan"
test "inf"
test "-inf"