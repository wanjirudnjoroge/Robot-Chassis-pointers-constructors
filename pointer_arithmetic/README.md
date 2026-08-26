#  Arrays and Pointers

This task demonstrates how arrays and pointers work together in C++.

## Build & Run


g++ main.cpp -o main
./main


## Output


Index loop

5 10 15 20 25 30

Pointer walk

5 10 15 20 25 30

Addresses

&readings[i] and readings + i have the same address.

Size

sizeof in main = 24 bytes
sizeof inside function = 8 bytes


## What It Demonstrates

Arrays can be accessed using indexes or pointers.

`readings[i]` and `*(readings + i)` access the same value.

When an array is passed to a function, it is treated as a pointer, so `sizeof` gives the pointer size instead of the full array size.
