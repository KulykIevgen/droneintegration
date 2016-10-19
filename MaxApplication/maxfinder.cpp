#include "maxfinder.h"

MaxFinder::MaxFinder()
{

}

int MaxFinder::findMax(int a, int b)
{
    return (a > b) ? a : b;
}

int MaxFinder::findMaxInVector(const std::vector<int>& data)
{
    return *std::max(data.cbegin(),data.cend());
}


