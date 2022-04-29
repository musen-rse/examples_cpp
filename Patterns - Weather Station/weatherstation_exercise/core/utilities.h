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


#endif // __WEATHERSTATION_UTILITIES_H__