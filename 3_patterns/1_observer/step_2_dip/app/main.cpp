#include <string>
#include <iostream>
#include <sstream>
#include <signal.h>
#include <curses.h>
#include <termios.h>
#include <chrono>
#include <thread>
#include <random>

#include "screen.h"
#include "window.h"
#include "canvas.h"
#include "console.h"
#include "menu.h"

#include "data.h"
#include "TableChart.h"
#include "BarChart.h"


namespace tubs::random
{

int numberInRange(int low, int high)
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(low, high); // define the range
    return distr(gen);
}

}

/*
/ Application
*/
int main() {

    // safe terminal settings
    // https://arstechnica.com/civis/viewtopic.php?f=20&t=70699
    struct termios old_settings;
    tcgetattr( 0, &old_settings );

    tubs::ui::Screen screen;
    screen.clear();

    tubs::ui::Console console(screen.height(), screen.width() / 2, 0, 0);

    tubs::model::Data data;
    tubs::ui::TableChart tableChart(&data, &console);

    data.addChart(&tableChart);

    tubs::ui::Console console2(screen.height(), screen.width() / 2, screen.width() / 2, 0);
    tubs::ui::BarChart barChart(&data, &console2);

    data.addChart(&barChart);

    std::vector<std::string> keys {"apple", "banana", "ananas", "plum"};
    for(const auto& key : keys) {
        data.add(key, tubs::random::numberInRange(0,50));
    }

    while(true) {
        for(const auto& key : keys) {
            data.change(key, tubs::random::numberInRange(-1,1));
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }


    // restore terminal settings (e.g. to enable carriage return)
    tcsetattr( 0, TCSANOW, &old_settings );
    return 0;
}


