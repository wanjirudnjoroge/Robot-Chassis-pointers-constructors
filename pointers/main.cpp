#include <iostream>

int main() {
   

    int batteryPercent = 80;
    int* pBattery = &batteryPercent;

    std::cout << " Initial state \n";
    std::cout << "batteryPercent        = " << batteryPercent << "\n";
    std::cout << "pBattery (an address) = " << pBattery << "\n";
    std::cout << "*pBattery (dereferenced) = " << *pBattery << "\n";

    std::cout << "\n Change the variable directly \n";
    batteryPercent = 65;
    std::cout << "batteryPercent = " << batteryPercent
              << " | *pBattery = " << *pBattery << "\n";

    std::cout << "\n Change it through the pointer \n";
    *pBattery = 40;
    std::cout << "batteryPercent = " << batteryPercent
              << " | *pBattery = " << *pBattery << "\n";

    std::cout << "\n Point the same pointer at a second variable \n";
    int wheelSpeed = 120;
    std::cout << "BEFORE retarget: pBattery points at address " << pBattery
              << " (batteryPercent's address)\n";
    pBattery = &wheelSpeed;
    std::cout << "AFTER retarget:  pBattery points at address " << pBattery
              << " (wheelSpeed's address)\n";
    std::cout << "*pBattery = " << *pBattery << " (this is now wheelSpeed, not batteryPercent)\n";

    *pBattery = 200;
    std::cout << "After writing through pBattery again: wheelSpeed = " << wheelSpeed
              << " | batteryPercent = " << batteryPercent << " \n";

    return 0;
}
