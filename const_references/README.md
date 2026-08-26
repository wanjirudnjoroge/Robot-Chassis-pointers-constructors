# Const References 

This task demonstrates how `const` references can be used to read a struct without changing it.

## Build & Run


g++ main.cpp -o main
./main


## Output


sizeof(Robot) = 84 bytes

Robot

name = Rover-1
wheelSpeeds = [1, 1, 1, 1]
batteryPercent = 90

Before drain

batteryPercent = 90

After drain

batteryPercent = 90


## What It Demonstrates

const Robot& allows the function to read the robot without making a copy.

drainBatteryByValue() receives a copy, so changing the battery inside the function does not change the original robot.

const also prevents the function from changing the original struct.
