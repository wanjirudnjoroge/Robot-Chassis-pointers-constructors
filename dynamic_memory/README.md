# Memory Allocation

This task demonstrates how to allocate and release memory using pointers.

## Build & Run


g++ main.cpp -o main
./main


## Output


Allocation

heapArray = 0x5560c23ec2c0

Array values

10 20 30 40 50

Addresses

heapArray = 0x5560c23ec2c0
&localVar = 0x7ffca98034b8

Before release

heapArray = 0x5560c23ec2c0

After release

heapArray = 0


The addresses may be different when the program is run.

## What It Demonstrates

The program:

* Allocates an array on the heap.
* Stores values in the array.
* Shows heap and stack addresses.
* Releases the memory using `delete[]`.
* Sets the pointer to `nullptr` after releasing the memory.
