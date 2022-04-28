#ifndef APPLICATION_H
#define APPLICATION_H

#include <thread>

namespace tubs
{

class Application
{
public:
    Application();
    ~Application();
    void run();
    void stop();

private:
    std::thread* _runLoop;
    bool _stopped;
};

}

#endif