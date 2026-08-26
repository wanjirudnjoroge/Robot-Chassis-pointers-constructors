#include <iostream>
#include <cstring>

struct Robot {
    char name[64];
    float wheelSpeeds[4];
    int batteryPercent;
};

void printRobot(const Robot& r) {
    std::cout << "name = " << r.name << "\n";
    std::cout << "wheelSpeeds = [" 
              << r.wheelSpeeds[0] << ", "
              << r.wheelSpeeds[1] << ", "
              << r.wheelSpeeds[2] << ", "
              << r.wheelSpeeds[3] << "]\n";
    std::cout << "batteryPercent = " << r.batteryPercent << "\n";
}

void drainBatteryByValue(Robot r) {
    r.batteryPercent = 0;
    std::cout << "inside function: batteryPercent = " 
              << r.batteryPercent << "\n";
}

int main() {
    std::cout << "sizeof(Robot) = " << sizeof(Robot) << " bytes\n\n";

    Robot bot{};

    std::strcpy(bot.name, "Rover-1");

    bot.wheelSpeeds[0] = 1.0f;
    bot.wheelSpeeds[1] = 1.0f;
    bot.wheelSpeeds[2] = 1.0f;
    bot.wheelSpeeds[3] = 1.0f;

    bot.batteryPercent = 90;

    std::cout << " Robot \n";
    printRobot(bot);

    std::cout << "\n Before drain \n";
    std::cout << "batteryPercent = " << bot.batteryPercent << "\n";

    drainBatteryByValue(bot);

    std::cout << "\n After drain \n";
    std::cout << "batteryPercent = " << bot.batteryPercent << "\n";

    return 0;
}