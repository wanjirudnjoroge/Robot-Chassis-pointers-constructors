#include <iostream>

int main() {
    int count = 42;
    float wheelSpeed = 3.75f;
    char label = 'R';
    bool isRunning = true;
    int sensors[5] = {10, 20, 30, 40, 50};

    std::cout << count << " " << &count << " " << sizeof(count) << "\n";
    std::cout << wheelSpeed << " " << &wheelSpeed << " " << sizeof(wheelSpeed) << "\n";
    std::cout << label << " " << (void*)&label << " " << sizeof(label) << "\n";
    std::cout << isRunning << " " << &isRunning << " " << sizeof(isRunning) << "\n";

    int a = 1, b = 2, c = 3;
    std::cout << &a << "\n";
    std::cout << &b << "\n";
    std::cout << &c << "\n";

    std::cout << sensors << "\n";
    std::cout << &sensors[0] << "\n";
    std::cout << &sensors[4] << "\n";
    
    long gapBytes = (char*)&sensors[1] - (char*)&sensors[0];
    std::cout << gapBytes << " " << sizeof(int) << "\n";

    std::cout << &a << " " << &b << " " << &c << "\n";

    int extra = 99;

    std::cout << &a << " " << &b << " " << &c << " " << &extra << "\n";

    return 0;
}
