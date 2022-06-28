#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>


// --
// Command Interface provides the interface for the Invoker.
// --
class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

#endif
