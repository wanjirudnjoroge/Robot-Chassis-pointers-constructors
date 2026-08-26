#include <iostream>

void doubleByReference(int& n) {
    n = n * 2;
    std::cout << "n = " << n << "\n";
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    std::cout << " Reference doubling main\n";

    int y = 10;
    std::cout << "before: y = " << y << "\n";
    doubleByReference(y);
    std::cout << "after: y = " << y << "\n";

    std::cout << "\n Reference swap \n";

    int p = 1, q = 2;
    std::cout << "before: p = " << p << ", q = " << q << "\n";
    swapByReference(p, q);
    std::cout << "after: p = " << p << ", q = " << q << "\n";

    return 0;
}