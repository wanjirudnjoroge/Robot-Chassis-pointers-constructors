# A Class Memory

This task demonstrates the difference between shallow and deep copying when a class owns dynamic memory.

## Build & Run


g++ main.cpp -o main
./main


## Output


BrokenLog

original address = 0x55a5b5d442c0
copy address = 0x55a5b5d442c0
original value = 999

SafeLog

original address = 0x55a5b5d442c0
copy address = 0x55a5b5d442e0
original value = 111


The memory addresses may be different each time the program runs.

## What It Demonstrates

`BrokenLog` makes a shallow copy, so both objects use the same memory.

`SafeLog` makes a deep copy, so each object has its own memory.

Changing the `BrokenLog` copy changes the original, while changing the `SafeLog` copy does not.
