#include <iostream>

int main() {
    int size = 5;

    int* heapArray = new(std::nothrow) int[size];

    if (heapArray == nullptr) {
        std::cout << "Allocation failed!\n";
        return 1;
    }

    
    std::cout << "heapArray = " << heapArray << "\n";

    for (int i = 0; i < size; i++) {
        heapArray[i] = (i + 1) * 10;
    }

    std::cout << "Array values\n";
    for (int i = 0; i < size; i++) {
        std::cout << heapArray[i] << " ";
    }
    std::cout << "\n";

    int localVar = 7;

    std::cout << "Addresses\n";
    std::cout << "heapArray = " << heapArray << "\n";
    std::cout << "&localVar = " << &localVar << "\n";

    std::cout << "Before release\n";
    std::cout << "heapArray = " << heapArray << "\n";

    delete[] heapArray;
    heapArray = nullptr;

    std::cout << "After release\n";
    std::cout << "heapArray = " << heapArray << "\n";

    return 0;
}