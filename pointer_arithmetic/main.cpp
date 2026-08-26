#include <iostream>

void printSizeofInsideFunction(int* arr) {
    std::cout << "sizeof inside function = " << sizeof(arr) << " bytes\n";
}

int main() {
    int readings[6] = {5, 10, 15, 20, 25, 30};

    std::cout << "Index loop\n";
    for (int i = 0; i < 6; i++) {
        std::cout << readings[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Pointer walk\n";
    int* p = readings;

    for (int i = 0; i < 6; i++) {
        std::cout << *(p + i) << " ";
    }
    std::cout << "\n";

    std::cout << "Addresses\n";
    for (int i = 0; i < 6; i++) {
        std::cout << &readings[i] << " = " << readings + i << "\n";
    }

    std::cout << "Size\n";
    std::cout << "sizeof in main = " << sizeof(readings) << " bytes\n";
    printSizeofInsideFunction(readings);

    return 0;
}