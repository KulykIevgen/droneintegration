#ifndef MAXFINDER_H
#define MAXFINDER_H

#include <vector>
#include <algorithm>

class MaxFinder
{
public:
    MaxFinder();
    static int findMax(int a,int b);
    static int findMaxInVector(const std::vector<int>& data);
};

#endif // MAXFINDER_H
