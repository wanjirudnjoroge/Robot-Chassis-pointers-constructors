#include <iostream>

void doubleByValue(int n) {
    n = n * 2;
    std::cout << "inside doubleByValue: n = " << n << "\n";
}

void doubleByPointer(int* n) {
    *n = *n * 2;
    std::cout << "inside doubleByPointer: *n = " << *n << "\n";
}

void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    std::cout << " By value \n";
    int x = 10;
    std::cout << "before: x = " << x << "\n";
    doubleByValue(x);
    std::cout << "after: x = " << x << "\n";

    std::cout << "\n By pointer \n";
    int y = 10;
    std::cout << "before: y = " << y << "\n";
    doubleByPointer(&y);
    std::cout << "after: y = " << y << "\n";

    std::cout << "\n Swap \n";
    int p = 1, q = 2;
    std::cout << "before: p = " << p << ", q = " << q << "\n";
    swapByPointer(&p, &q);
    std::cout << "after: p = " << p << ", q = " << q << "\n";

    return 0;
}