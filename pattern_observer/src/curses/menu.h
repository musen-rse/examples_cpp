#ifndef menu_h
#define menu_h

#include <list>
#include <iostream>
#include <functional>
#include <ncurses.h>

#include "window.h"

namespace tubs::ui {

struct MenuEntry
{
    MenuEntry(std::string title, char key, std::function<void(void)> cmd)
    : title(title), key(key), command(cmd) { }

    std::string title {"none"};
    char key;
    std::function<void(void)> command;
};


class Menu
{
public:
    Menu(Window* win);
    void show();
    void addEntry(MenuEntry entry);

private:
    void _printMenu();

private:
    Window* _win {nullptr};
    std::list<MenuEntry> _entries;
};

}




#endif
