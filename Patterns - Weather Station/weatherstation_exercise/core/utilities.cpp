#include "utilities.h"
#include <chrono>
#include <ctime>   // localtime
#include <sstream> 
#include <iomanip> // put_time
#include <string>
#include <iostream>
#include <random>


namespace tubs::time
{

std::string currentTimeAndDate()
{
    const auto now = std::chrono::system_clock::now();
    const auto in_time_t = std::chrono::system_clock::to_time_t(now);

    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X");
    return ss.str();
}

}

namespace tubs::random
{

int numberInRange(int low, int high)
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(-5, 5); // define the range
    return distr(gen);
}

}

namespace tubs::screen
{

void clear() {
#ifdef WINDOWS
    system("cls");
#else
    system("clear");
#endif
}

}