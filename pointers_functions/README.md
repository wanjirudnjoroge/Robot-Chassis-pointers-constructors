#  Function 

This task demonstrates the difference between passing a value and passing a pointer to a function.

## Build & Run


g++ main.cpp -o main
./main


## Output


 By value 

before: x = 10
inside doubleByValue: n = 20
after: x = 10

 By pointer 

before: y = 10
inside doubleByPointer: *n = 20
after: y = 20

 Swap 

before: p = 1, q = 2
after: p = 2, q = 1


## What It Demonstrates

* Passing by value does not change the original variable.
* Passing by pointer can change the original variable.
* Pointers can be used to swap two variables.
