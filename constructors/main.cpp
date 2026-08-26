#include <iostream>

class Motor {
public:
    char label;
    int maxRpm;
    bool isEnabled;

    Motor() {
        label = '?';
        maxRpm = 0;
        isEnabled = false;
    }

    Motor(char l, int rpm) {
        label = l;
        maxRpm = rpm;
        isEnabled = true;
    }

    Motor(char l, int rpm, bool enabled)
        : label(l), maxRpm(rpm), isEnabled(enabled) {
    }

    void print() const {
        std::cout << "Motor " << label
                  << ": maxRpm = " << maxRpm
                  << ", enabled = " << isEnabled << "\n";
    }
};

int main() {
    Motor left;
    Motor right('R', 200);
    Motor spare('S', 150, false);

    left.print();
    right.print();
    spare.print();

    return 0;
}