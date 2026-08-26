#include <iostream>

class BrokenLog {
public:
    int* readings;
    int count;

    BrokenLog(int n) : count(n) {
        readings = new int[count];

        for (int i = 0; i < count; i++) {
            readings[i] = 0;
        }
    }

    ~BrokenLog() {
        delete[] readings;
    }
};

class SafeLog {
public:
    int* readings;
    int count;

    SafeLog(int n) : count(n) {
        readings = new int[count];

        for (int i = 0; i < count; i++) {
            readings[i] = 0;
        }
    }

    SafeLog(const SafeLog& other) : count(other.count) {
        readings = new int[count];

        for (int i = 0; i < count; i++) {
            readings[i] = other.readings[i];
        }
    }

    ~SafeLog() {
        delete[] readings;
    }
};

int main() {
    std::cout << "BrokenLog\n";

    BrokenLog original(3);
    original.readings[0] = 111;

    BrokenLog copy = original;

    std::cout << "original address = " << original.readings << "\n";
    std::cout << "copy address = " << copy.readings << "\n";

    copy.readings[0] = 999;

    std::cout << "original value = " << original.readings[0] << "\n";

    copy.readings = nullptr;

    std::cout << "\nSafeLog\n";

    SafeLog safeOriginal(3);
    safeOriginal.readings[0] = 111;

    SafeLog safeCopy = safeOriginal;

    std::cout << "original address = " << safeOriginal.readings << "\n";
    std::cout << "copy address = " << safeCopy.readings << "\n";

    safeCopy.readings[0] = 999;

    std::cout << "original value = " << safeOriginal.readings[0] << "\n";

    return 0;
}