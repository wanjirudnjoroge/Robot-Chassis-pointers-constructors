# Task 1: Where things live

Prints four differently-typed variables plus an array, showing the value, address, and size of each, then shows whether declaring one more local variable partway through the function moves the earlier addresses.

## Build & run
```
g++ -std=c++17 -Wall main.cpp -o task1
./task1
```

## Output before the extra variable is declared
```
-- BEFORE: declaring one more local variable partway through --
&a = 0x7fff3bac5c28, &b = 0x7fff3bac5c2c, &c = 0x7fff3bac5c30
```

## Output after
```
-- AFTER: extra declared --
&a = 0x7fff3bac5c28, &b = 0x7fff3bac5c2c, &c = 0x7fff3bac5c30, &extra = 0x7fff3bac5c34
```

Full run (addresses will differ on your machine — this is one real run, pasted as-is):
```
Your Name Here

-- Basic variables: value, address, size --
count      = 42 | address = 0x7fff3bac5c20 | size = 4 bytes
wheelSpeed = 3.75 | address = 0x7fff3bac5c24 | size = 4 bytes
label      = R | address = 0x7fff3bac5c1e | size = 1 bytes
isRunning  = 1 | address = 0x7fff3bac5c1f | size = 1 bytes

-- Three consecutive local variables (declared back to back) --
&a = 0x7fff3bac5c28
&b = 0x7fff3bac5c2c
&c = 0x7fff3bac5c30

-- Array address analysis --
address of array (sensors)        = 0x7fff3bac5c40
address of first element &sensors[0] = 0x7fff3bac5c40
address of last element  &sensors[4] = 0x7fff3bac5c50
gap between sensors[0] and sensors[1] = 4 bytes (sizeof(int) = 4)

-- BEFORE: declaring one more local variable partway through --
&a = 0x7fff3bac5c28, &b = 0x7fff3bac5c2c, &c = 0x7fff3bac5c30

-- AFTER: extra declared --
&a = 0x7fff3bac5c28, &b = 0x7fff3bac5c2c, &c = 0x7fff3bac5c30, &extra = 0x7fff3bac5c34
```

## Reading the output
`a`, `b`, and `c` sit 4 bytes apart (`0x...28 → 0x...2c → 0x...30`), matching `sizeof(int)`, so the compiler laid them out back-to-back on the stack in declaration order. Declaring `extra` after them did not move `a`, `b`, or `c` — their addresses are identical before and after, and `extra` was simply placed at the next free slot (`0x...34`). The array's own address and the address of its first element are the same value, because an array *is* its first element's location; the gap between elements (4 bytes) matches `sizeof(int)` exactly, confirming the array is laid out contiguously with no padding between elements.

## Anything that surprised me / didn't work first time
(fill in from your own run — e.g. note here if your compiler ordered `a`/`b`/`c` differently, which can happen depending on optimisation level)
