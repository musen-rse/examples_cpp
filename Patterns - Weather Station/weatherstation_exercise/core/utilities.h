#ifndef __WEATHERSTATION_UTILITIES_H__
#define __WEATHERSTATION_UTILITIES_H__

#include <string>

namespace tubs::time
{

std::string currentTimeAndDate();

}

namespace tubs::random
{

int numberInRange(int low, int high);

}

namespace tubs::screen
{

void clear();

}


#endif // __WEATHERSTATION_UTILITIES_H__